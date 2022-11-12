#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
printf("Input row and column of A matrix \n");
scanf("%d %d",&n,&m);
printf(" Input row and column of B matrix \n");
scanf("%d %d",&p,&q);
if(n==q){
printf(" Matrices can be Multiplied: \n");
printf(" Input A-matrix \n");
for(i=0;i<n;++i)
for(j=0;j<m;++j)
scanf("%d",&a[i][j]);
printf(" Input B-matrix \n");
for(i=0;i<p;++i)
for(j=0;j<q;++j)
scanf("%d",&b[i][j]);
printf("The resultant matrix is\t:\n");
for(i=0;i<n;++i){
for(j=0;j<m;++j){
c[i][j]=0;
for(k=0;k<m;++k)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
printf("%d",c[i][j]);}
printf("\n");}}
else
printf("Matrices cannot be multiplied \n");
return 0;
}
