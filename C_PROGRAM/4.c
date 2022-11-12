#include<stdio.h>
int main()
{
  int i,n,x;
  float result;
  printf("Enter the value of n:");
  scanf("%d",&n);
  printf("Enter the value of X:" );
  scanf("%d",&x);
  for(i=1;i<=n;i++)
  {
    result=result+x*i;
  }
  printf("result is %f",result);
  return 0;
}
