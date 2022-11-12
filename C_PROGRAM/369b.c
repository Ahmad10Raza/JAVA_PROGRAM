#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<Windows.h>
int main()
{
	char *s[] = {
		"To err is human",
		"But to really mess up things...",
		"One needs to know C!!"
	};
	/*As the given strings are stored in the ROM (initialized direct in
    the pointer saved them in ROM),	so they cannot be write only Read
    operation can be done. So we just replace the pointer saved in the
	array of pointer to string by a new pointer in which we make changes.*/
	char *p;/*Pointer in which we will make changes*/
	for (int i = 0; i <= 2; i++)
	{
		p = (char*)malloc(sizeof(strlen(s[i]) + 1));/*Allocating memory*/
		strcpy(p, s[i]);/*Copying content to be changed from the pointer
        initialized to the new pointer*/
		strrev(p);/*Reverse Operation taking place*/
		s[i] = p;/*Saving the changes in the array of pointers to string.*/
		puts(s[i]);
	}
