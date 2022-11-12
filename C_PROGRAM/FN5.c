#include "stdio.h"
void printwithcomma (long num);
int main(void)
{
  long number;
  printf("Enter the number : " );
scanf("%ld",&number );
printwithcomma (number);
return 0;
}
void printwithcomma(long num)
 {
int  thousand,hundred;
thousand=num/1000;
hundred= num%1000;
printf("The bnumber you entred is %d,%d",thousand,hundred );
  }
