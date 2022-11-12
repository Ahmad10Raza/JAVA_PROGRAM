#include "stdio.h"
int main()
{
  int a[3][3],b[3][3],c[3][3],i,j;
  printf("Enter the elements of matrix A:" );
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
{
  scanf("%d\t",&a[i][j]);
}
  }
  printf("Enter the elements of matrix B:" );
  for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    scanf("%d\t",&b[i][j]);
  }

}
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    c[i][j]=a[i][j]-b[i][j];
  }

}
printf("Sumof matrix is :=\n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    printf("%d",c[i][j]);
    printf("\t");
  }

}
return 0;
}
