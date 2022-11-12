#include<stdio.h>
int main()
{
  int temp,remainder,number,rev=0;
  printf("Enter the number:");
  scanf("%d",&number);
  temp=number;
  while (number!=0)
   {
    remainder=number % 10;
    rev=rev*10 + remainder;
    number=number/10;
  }
  if(rev==temp)
  {
    printf("Number  is palindrome");
}
else
{
    printf("Number is not palindrome");
  }
  return 0;
}
