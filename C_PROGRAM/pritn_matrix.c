#include<stdio.h>
int main()
{
  int a[50],i,n;
  printf("Enter the Value of N:");
  scanf("%d",&n);
  printf("Enter the elements of array:\n" );
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  printf("%d\n",a[i]);
}
return 0;
}
