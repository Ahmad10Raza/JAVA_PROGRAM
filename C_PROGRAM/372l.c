#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define H 7
#define W 8
int large(char num[]) {
   int i, j, k;
   // declaring char 2D arrays and initializing
   // with hash-printed digits
   char zero[H][W]={" ##### ", // H=0
      " # # ", // H=1
      " # # ", // H=2
      " # # ", // H=3
      " # # ", // H=4
      " # # ", // H=5
      " ##### "},// H=6
   one[H][W]={" # ",
      " # ",
      " # ",
      " # ",
      " # ",
      " # ",
      " # "},
   two[H][W]={ " ##### ",
      " # ",
      " # ",
      " ##### ",
      " # ",
      " # ",
      " ##### "},
   three[H][W]={" ##### ",
      " # ",
      " # ",
      " ##### ",
      " # ",
      " # ",
      " ##### "},
   four[H][W]={" # ",
      " # # ",
      " # # ",
      " ##### ",
      " # ",
      " # ",
      " # "},
   five[H][W]={" ##### ",
      " # ",
      " # ",
      " ##### ",
      " # ",
      " # ",
      " ##### "},
   six[H][W]={ " ##### ",
      " # ",
      " # ",
      " ##### ",
      " # # ",
      " # # ",
      " ##### "},
   seven[H][W]={" ##### ",
      " # ",
      " # ",
      " # ",
      " # ",
      " # ",
      " # "},
   eight[H][W]={" ##### ",
      " # # ",
      " # # ",
      " ##### ",
      " # # ",
      " # # ",
      " ##### "},
   nine[H][W]={" ##### ",
      " # # ",
      " # # ",
      " ##### ",
      " # ",
      " # ",
      " # "};
   if (strlen(num) > 10)
      printf("\nYou must enter a number upto 10 digits.\nTry again!\n");
   else {
      printf("\n");
      k=1;
      j=0; //controls H of each digit
      while (k <= 7) //controls height
      {
         for (i=0; i<strlen(num); i++) //reads each digit
          {
            if (num[i] == '0')
               printf("%s", zero[j]);
            else if (num[i] == '1')
               printf("%s", one[j]);
            else if (num[i] == '2')
               printf("%s", two[j]);
            else if (num[i] == '3')
               printf("%s", three[j]);
            else if (num[i] == '4')
               printf("%s", four[j]);
            else if (num[i] == '5')
               printf("%s", five[j]);
            else if (num[i] == '6')
               printf("%s", six[j]);
            else if (num[i] == '7')
               printf("%s", seven[j]);
            else if (num[i] == '8')
               printf("%s", eight[j]);
            else if (num[i] == '9')
               printf("%s", nine[j]);
         }
         printf("\n");
         k++;
         j++;
      }

   return 1;
}
//main fucntion
int main()
{
   char n[] = {"2168"};
   large(n);
   return 0;
}
