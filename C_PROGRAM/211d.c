#include<stdio.h>
void prime(int num);
int main()
{
  int num;
  printf("Enter the number:");
scanf("%d",&num );
printf("The prime factorial of %d are :",num );
prime(num);
return 69;
}
void prime(int num)
{
  int x;
  for(x=2;x<=num;x++)
  {
    if(num%x==0)
    {
      printf("%d , ",x);
      prime(num/x);
      break;
    }
  }
}
