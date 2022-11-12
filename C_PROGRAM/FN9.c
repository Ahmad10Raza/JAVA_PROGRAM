#include "stdio.h"
void swapv(int x , int y);
int main()
{
  int i=5,j=10;
  swapv(i,j);
  printf("The swap value is %d ,%d \n",i,j);
  return 0;
}
void swapv(int x, int y)
{
  int t;
  t=x;
  x=y;
  y=t;
  printf("x=%d , y=%d\n",x,y);
}
