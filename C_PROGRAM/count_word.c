#include "stdio.h"
int main()
{
  int count=0,i;
  char str[100];
  printf("Enter the strings: ");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==' ')
    count++;
  }
  printf("The Number of string is %d",count+1);
return 0;
}
