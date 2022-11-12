#include <stdio.h>
int main()
{
  int i, Number, count;
  printf(" Prime Number from 101 to 999 are: \n");
  for(Number = 101; Number <= 999; Number++)
  {
    count = 0;
    for (i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && Number != 1 )
    {
	printf(" %d ", Number);
    }
  }
  return 0;
}
