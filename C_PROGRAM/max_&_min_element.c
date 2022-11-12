#include "stdio.h"
int findmax(int a[10][10],int r, int c);
int findmin(int a[10][10],int r, int c);
int main()
{
  int i ,j,min,max,r,c,a[10][10];
  printf("Enter the Row of matrix :");
  scanf("%d",&r);
  printf("Enter the Coloum of matrix: ");
  scanf("%d",&c );
  for(i=0;i<r;i++)
  {
    for(j=0;j<r;j++)
    {
      printf("Enter the a%d%d: ",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
  }
  printf("The Matrix is \n" );
  for(i=0;i<r;i++)
{
  for(j=0;j<r;j++)
  {
    printf("%d\t",a[i][j]);
  }
printf("\n");
}
max=findmax(a,r,c);
min=findmin(a,r,c);
printf("The maximum element is %d",max);
printf("\nThe minimum element is %d",min);
}
int findmax(int a[10][10],int r ,int c)
{
  int i ,j,t;
  t=a[1][1];
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(a[i][j]>t)
      t=a[i][j];
    }
  }
  return (t);
}
int findmin(int a[10][10],int r ,int c)
{
  int i ,j,t;
  t=a[1][1];
  for(i=0;i<r;i++)
{
  for(j=0;j<r;j++)
  {
    if(a[i][j]<t)
    t=a[i][j];
  }
}
return (t);
}
