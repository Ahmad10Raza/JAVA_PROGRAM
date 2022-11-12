#include<stdio.h>
#define MAX 50
#include <stdlib.h>
void main()
{
    int stack[MAX],ch,ele,x,top=-1,i;
    do
    {
        printf("\n1.PUSH \n2.POP \n3.Display \n4.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        if(top==MAX-1){
            printf("STACK OVERFLOW");
        }
        else{
            printf("Enter the elemen: ");
            scanf("%d",&ele);
            top=top+1;
            stack[top]=ele;
        }
            break;
            case 2:
            if(top==-1){
                printf("STACK UNDERFLOW");
            }
            else{
                x=stack[top];
                printf("\nDeleted element is = %d",x);
                top=top-1;
            }
         break;
         case 3:
         if(top==-1){
            printf("Nothing to Display.");
         }
         else{
            printf("Elements of Satck are : ");
            for(i=top;i>=0;i--)
            {
                printf("%d\n",stack[i]);
            }
         }
         break;
         case 4:
         exit(0);
        default:
        printf("Invalid Choice ");
            break;
        }
    } while (ch==1 || ch==2 || ch==3);

}
