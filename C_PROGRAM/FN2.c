#include "stdio.h"
void printfuck (int x);
int main()
{
  int a;
  a=2809;
  printfuck (a);
  a=2003;
  printfuck (a);
}
void printfuck (int x)
{
  printf("%d\n",x);
  return;
}
