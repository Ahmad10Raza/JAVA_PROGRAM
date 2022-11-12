#include<stdio.h>
void primefactor(int num);
int main()
{
  int count;
  printf("\nPrime factor of %d are ....\n");
  for(count=2;num>1;count++)
  {
    while(num%count==0)
    {
      printf("%d",count);
      num=num/count;
    }
  }
  printf("\n");
}
int primefactor(int num)
{
  int num;
  printf("Enter  positive number");
  scanf("%d",&num);
  primefactor(num);
  return 0;
}
