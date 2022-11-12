#include<stdio.h>
int main()
{
	char num[20];
	int i, sum = 0;
	printf("\nEnter the 16 digit credit card number : ");
	scanf("%s", num);
	for (i = 0; i <= 15; i++)//Traversing all numbers
	{
		num[i]=num[i]-48;//converting each character in numeral
		if ((i % 2))//if the number is on right so it will directly get summed
			sum = sum + num[i];
		else//if number is on left, so it will first get doubled
		{
			num[i]=num[i]* 2;
			if (num[i] >= 10)//if number is greater then or equal to 10 so it will subtracted from 9
				num[i]=num[i]-9;
			sum = sum + num[i];	//summing number
		}
	}
	if ((sum % 10))//if sum is divisble by 10 so number is valid
		printf("\nNumber is valid.");
	else
		printf("\nNumber is not valid.");
	return 0;
}
