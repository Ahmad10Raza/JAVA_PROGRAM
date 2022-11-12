	.file	"test02.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"Enter an integer: "
.LC1:
	.string	"%d"
.LC2:
	.string	"%d is even."
.LC3:
	.string	"%d is odd."
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rax, -4[rbp]
	mov	rsi, rax
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	__isoc99_scanf@PLT
	mov	eax, DWORD PTR -4[rbp]
	and	eax, 1
	test	eax, eax
	jne	.L2
	mov	eax, DWORD PTR -4[rbp]
	mov	esi, eax
	lea	rdi, .LC2[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L3
.L2:
	mov	eax, DWORD PTR -4[rbp]
	mov	esi, eax
	lea	rdi, .LC3[rip]
	mov	eax, 0
	call	printf@PLT
.L3:
	mov	eax, 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
