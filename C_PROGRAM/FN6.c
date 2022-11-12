#include<stdio.h>
void india();
void usa();
void russia();
void china();
void saudia();
int main()
{
  printf("i am in main\n");
  india();
  printf("I am back in main\n" );
  return 0;
}
void india()
{
  printf("i am in india\n");
  usa();
  printf("i am back in india\n" );
}
void usa()
{
  printf("I ma i usa \n" );
  russia();
  printf("i am back in usa\n" );
}
void russia()
{
  printf("i am in russia\n" );
  china();
  printf("i ma in back in russia\n");
}
void china()
{
  printf("i am in china\n" );
  saudia();
  printf("i ma back in russia\n" );
}
void saudia()
{
  printf("i am in saudia\n" );
}
