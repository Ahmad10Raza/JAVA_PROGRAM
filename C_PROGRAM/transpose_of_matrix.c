#include "stdio.h"
int main()
{
  int a[10][10],transpose[10][10],i,j,r,c;
  printf("Enter the Row and Coloumn of matrix : ");
  scanf("%d %d",&r,&c);
  printf("Enter the elements of matrix:");
  for(i=0;i<r;++i)
    for(j=0;j<c;++j)
{
  printf("Enter element a%d%d: ",i+1,j+1);
scanf("%d",&a[i][j]);
}
printf("\nEntered matrix is : \n ");
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
  printf("%d\t",a[i][j]);
  if(j==c-1)
  printf("\n");
}
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
transpose[j][i]=a[i][j];
}
printf("The transpose of matrix is :\n");
for(i=0;i<c;++i)
for(j=0;j<r;++j)
{
  printf("%d\t",transpose[i][j]);
  if(j==r-1)
  printf("\n");
}
return 0;
}
