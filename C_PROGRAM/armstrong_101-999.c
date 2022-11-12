#include<stdio.h>
int main()
{
int no, temp, rem, sum=0;
printf("Armstrong numbers between 101 and 999 are:\n");
for(no=101; no<=999; no++)
{
temp=no;
while(temp>0)
{
rem=temp%10;
sum=sum+(rem*rem*rem);
temp=temp/10;
}
if(no==sum)
{
printf("\n%d", no);
}
}
return 0;
}
