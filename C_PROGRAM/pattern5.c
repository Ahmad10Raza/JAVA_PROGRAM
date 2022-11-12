#include <stdio.h>
int main()
 {
int i, space, rows, k;
printf("Enter the number of rows: ");
scanf("%d", &rows);
for (i = 1; i <= rows; ++i, k = 0)
{
for (space = 1; space <= rows - i; ++space)
{
printf("  ");
  }
for(k=0;k!=(i*2-1);++k)
{
printf("* ");
}
printf("\n");
}
return 0;
}
