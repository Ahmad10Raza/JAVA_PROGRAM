#include<stdio.h>
int main()
{
  int i,j,num,isprime;
  printf("Enter the number:");
  scanf("%d",&num);
  printf("The prime factor is : ");
  for(i=2;i<=num;i++)
  {
    if(num%i==0)
    {
      isprime=1;
      for(j=2;j<=i/2;j++)
      {
        if(i%j==0)
        {
          isprime=0;
          break;
        }
      }
      if(isprime==1)
{
  printf("%d ,",i);
}
    }
  }
  return 0;
}
