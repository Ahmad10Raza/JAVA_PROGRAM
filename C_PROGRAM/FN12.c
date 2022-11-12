#include<stdio.h>
void area_para (int r, float *area, float *para);
int main()
{
  int r;
  float area,para;
  printf("Enter the radius: ");
  scanf("%d",&r);
  area_para(r, &area, &para);
  printf("The area is=%f",area);
  printf("the para is =%f\n",para);
return 0;
}
void area_para(int r,float *area,float *para)
{
  *area=3.14*r*r;
  *para=2*3.14*r;
}
