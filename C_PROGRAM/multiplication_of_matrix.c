#include "stdio.h"
int main()
{
int a[100][100],b[100][100],d[100][100],i,j,r,c,p,q,k;
  printf("Enter the 1st  matrix Row and Coloumn of matrix : ");
  scanf("%d %d",&r,&c);
  printf("Enter the 2st  matrix Row and Coloumn of matrix : ");
  scanf("%d %d",&p,&q);
  if(r==q)
  {
  printf("Enter 1st Matrix elements: ");
  for(i=0;i<r;++i)
  {
    for(j=0;j<c;++j)
{
  printf("Enter 1st Matrix element a%d%d: ",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("Enter 2nd matrix elements of matrix:");
for(i=0;i<p;++i)
  for(j=0;j<q;++j)
{
printf("Enter 2nd matrix element a%d%d: ",i+1,j+1);
scanf("%d",&b[i][j]);
}
printf("\nEntered 1st matrix is : \n ");
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
  printf("%d\t",a[i][j]);
  if(j==c-1)
  printf("\n");
}
printf("\nEntered 2nd matrix is : \n ");
for(i=0;i<p;++i)
for(j=0;j<q;++j)
{
  printf("%d\t",b[i][j]);
  if(j==q-1)
  printf("\n");
}
printf("The multiplied matrix is : .....\n");
for(i=0;i<r;++i)
{
for(j=0;j<c;++j)
{
d[i][j]=0;
for(k=0;k<c;++k)
d[i][j]=d[i][j]+a[i][k]*b[k][j];
printf("%d\t",d[i][j]);
}
printf("\n");
}
}
else
  printf("Matrix is can't multiplied");
return 0;
}
