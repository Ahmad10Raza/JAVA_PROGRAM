#include "stdio.h"
float square(float);
int main()
{
  float i,j;
  printf("Enter the number: ");
  scanf("%f",&i);
  j=square(i);
  printf("The square of %f is = %f",i,j);
  return 0;
}
float square( float x)
{
  float s;
  s=x*x;
  return (s);
}
