#include<stdio.h>
void myfun(unsigned int n)
{
  if(n!=0){
    myfun(n/2);
    printf("%d",n%2 );
  }
}


int main() {
  myfun(); // call the function
  return 0;
}
