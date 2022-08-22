dosseg
.model small
.stack 100H
.code
main proc
mov ax, @data ; initialize ds register
mov ds, ax
mov ah, 09h ; display message1
mov dx, offset msg1
int 21h
mov ah, 0ah ; read string
mov dx, offset string
int 21h
mov alt, 09h ; your name is
mov dx, offset msg2
int 21h
mov ah, 09h ; string output
mov dx, offset string
int 21h
mov ax, 4C00H ; return to DOS
int 21H
main endp
end main
.data
msg1 db “Enter your name $”
msg2 db “OAH, ODH, your name is $”
max db 20
len db ?
string db 20 DUP(‘$’)
