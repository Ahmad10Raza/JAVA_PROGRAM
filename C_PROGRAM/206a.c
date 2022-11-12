#include<stdio.h>
int rec(int);
int main()
{
  int a,fact;
  printf("Enter the number:");
  scanf("%d",&a);
  fact=rec(a);
  printf("The factorial of %d is %d ",a,fact);
return 0;
}
int rec(int x)
{
  int f;
  if(x==1 || x==0)
  return (1);
  else
  f=x*rec(x-1);
  return (f);
}
