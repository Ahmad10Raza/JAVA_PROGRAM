#include<stdio.h>
#include<math.h>
int powers(int a,int b);
int main()
{
  int a,b,res;
  printf("Enter the number:");
scanf("%d",&a);
printf("Entter the number b\n" );
scanf("%d",&b);
res=powers(a,b);
printf("The result is %d",res);
}
int powers(int a,int b)
{
  int x;
  x= pow(a,b);
  return (x);
}
