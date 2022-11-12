#include "stdio.h"
#include "math.h"
int main()
{
  double a ,b,c,determinant,root1,root2,realpart,imaginarypart;
  printf("Enter the cofficent of Quadretic equation (with sign): ");
  scanf("%lf %lf %lf",&a,&b,&c);
  determinant=b*b-4*a*c;
  if(determinant>0)
  {
    root1=(-b+sqrt(determinant))/(2*a);
    root2=(-b-sqrt(determinant))/(2*a);
    printf("root1=%.2lf and root2=%.2lf",root1,root2);
  }
  else if(determinant==0)
  {
    root1=root2=-b/(2*a);
    printf("root1=root2=%.2lf",root1);
  }
  else
  {
    realpart=-b/(2*a);
    imaginarypart=sqrt(-determinant)/(2*a);
    printf("root1=%.2lf+%.2lfi and root2=%.2lf-%.2lfi",realpart,imaginarypart,realpart,imaginarypart );
  }
  return 0;
}
