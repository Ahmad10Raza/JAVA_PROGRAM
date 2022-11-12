#include<stdio.h>
int multiply (int num1 , int num2);
int main ()
{
  int a,b,product;
  printf("Enter the number: " );
  scanf("%d%d",&a,&b );
  product=multiply (a,b);
  printf("The product  of %d  and %d is  %d ",a,b,product);
  return 0;
}
int multiply (int num1 , int num2)
{
  return (num1*num2);
}
