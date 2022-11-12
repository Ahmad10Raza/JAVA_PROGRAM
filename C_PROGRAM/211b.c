``#include<stdio.h>
void func(int a, int b,int c, float *avg, float *per);
int main()
{
  int a,b,c;
  float avg,per;
  printf("Enter the three subect marks: ");
  scanf("%d %d %d",&a,&b,&c);
  func(a,b,c,&avg,&per);
  printf("\nThe avg is : %.2f",avg);
  printf("\n The perchentage is : %.2f",per);
return 0;
}
void func(int a, int b,int c, float *avg, float *per)
{
  *avg=(a+b+c)/3.0;
  *per=((a+b+c)/300.0)*100;
}
