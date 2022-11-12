#include<stdio.h>
int fibo(int num);
int main()
{
  int num,c=0,i;
  printf("Enter the number: ");
  scanf("%d",&num );
  printf("Fibonacci series :\n" );
  for(i=1;i<=num;i++)
  {
    printf("%d\n",fibo(c));
    c++;
  }
}
int fibo(int num)
{
  if(num==0)
  {
    return 0;
  }
  else if(num==1)
  {
    return 1;
  }
  else
  {
    return (fibo(num-1)+fibo(num-2));
  }
}
