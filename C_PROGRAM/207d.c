#include<stdio.h>
int leap(int n);
int main()
{
  int n;
  printf("Enter the year: ");
  scanf("%d",&n);
  leap(n);
  if(n==0)
  printf("year is leap ");
  else
  printf("Not leap year");
  return 0;
}
int leap(int n)
{
   if(n%4==0 || n%400==0)
   return (0);
   else
   return (1);
}
