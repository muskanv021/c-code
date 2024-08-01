// Online C compiler to run C program online
#include <stdio.h>

int main() {
     int a,b,c,x;
     float d;
     printf("\n Press 1 for addition");
     printf("\n Press 2 for Substraction");
     printf("\n Press 3 for Multiplicatioin");
     printf("\n Press 4 for Division");
     printf("\n Enter your choice");
     scanf("%d",&x);
     switch(x)
     {
         case 1:
         printf("\n Enter two values:");
         scanf("%d %d",&a,&b);
         c=a+b;
         printf("\n sum of %d and %d is %d", a,b,c);
         break;
         case 2:
         printf("\n Enter two values:");
         scanf("%d %d",&a,&b);
         c=a-b;
         printf("\n substraction of %d and %d is %d", a,b,c);
         break;
         case 3:
         printf("\n Enter two values:");
         scanf("%d %d",&a,&b);
         c=a*b;
         printf("\n Multiplication of %d and %d is %d", a,b,c);
         break;
         case 4:
         printf("\n Enter two values:");
         scanf("%d %d",&a,&b);
         if(b!=0)
         {
         c=a/b;
         printf("\n Division of %d and %d is %d", a,b,c);
         }
         else
         {
             printf("Not Divisible by zero");
         }
         break;
         default:
         printf("\n Invalid Input!!");
         
         
     }
    return 0;
}
