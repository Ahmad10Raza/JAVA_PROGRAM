#include "stdio.h"
#include "string.h"
int main()
{
  char student[5];
  int i,l;
  printf("Enter the student name: " );
  for(i=0;i<5;i++)
gets(student[i]);
  printf("Name of student having less than 8 character:- ");
  for(i=0;i<5;i++)
  {
    l=strlen(student[i]);
    if(l<8)
    puts(student[i]);
  }
  return 0;
}
