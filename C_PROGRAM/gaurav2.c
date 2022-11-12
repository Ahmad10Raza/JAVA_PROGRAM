#include<stdio.h>
int main()
{
  int a=10,b=1,s;
  while(b<=10)
  {
    s=a*b;
    printf("%d*%d=%d\n",a,b,s);
    b++;
  }
  return 0;
}
