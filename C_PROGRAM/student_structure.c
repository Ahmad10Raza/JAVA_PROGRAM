#include "stdio.h"
struct student
{
  int roll;
  char name[5];
  int marks;
} s[5];
int main()
{
  int i;
  printf("Enter the ifromation: ");
  for(i=0;i<5;i++)
  {
  s[i].roll=i+1;
  printf("Enter the information for %d \n",s[i].roll);
  printf("NAME: ");
  scanf("%s",&s[i].name);
  printf("Enter the Marks: ");
  scanf("%d",&s[i].marks);
}
printf("Displaying Data: \n" );
for(i=0;i<5;i++)
{
  printf("Roll Number: %d\n",i+1 );
  printf("Name: ");
  puts(s[i].name);
  printf("Marks: %d",s[i].marks);
  printf("\n");
}
return 0;
}
