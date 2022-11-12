#include "stdio.h"
int fisrtdigit (int num);
int seconddigit(int num);
int addTwodigit(int num);
int main()
{
  int number,sum;
  printf("Enther the number : ");
  scanf("%d",&number );
  sum=addTwodigit(number);
  printf("sum of two digit is %d",sum);
  return 0;
}
int addTwodigit (int number)
{
int result;
result=fisrtdigit(number)+seconddigit(number);
return result;
}
int  fisrtdigit(int num)
{
  return (num%10);
}
int seconddigit (int num)
{
  int result;
  result=(num/10)%10;
  return result;
}
