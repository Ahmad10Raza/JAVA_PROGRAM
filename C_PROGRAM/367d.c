#include<stdio.h>
int main()
{
	char str[100];
	int i, num, fin = 0;
	printf("Enter a string of numbers : ");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)/*Run until string is not terminated.*/
	{
		num = str[i] - 48;/*Converting the character number into integer number.*/
		fin = fin * 10 + num;/*Combining the individual numbers to form a single integers*/
	}
	printf("\nNumber : %d", fin);
	return 0;
}
