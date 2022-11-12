#include "stdio.h"
int firdtdigit (int num);
int main()
{
  //function delaration
  int number,digit;
  printf("Enter the number : " );
  scanf("%d",&number );
  digit=firdtdigit (number);
  printf("The significant digit is %d",digit);
return 0;
}//the ned of nmain  function
int firdtdigit (int fuck)
{
return (fuck%10);
}
