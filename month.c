// Online C compiler to run C program online
#include <stdio.h>

int main() {
     int x;
     printf("ENter your current month:");
     scanf("%d",&x);
     switch(x)
     {
         case 1:
         printf("\n January");
         case 2:
         printf("\n Febraury");
         case 3:
         printf("\n march");
         case 4:
         printf("\n April");
         case 5:
         printf("\n May");
         case 6:
         printf("\n june");
         case 7:
         printf("\n July");
         case 8:
         printf("\n August");
         case 9:
         printf("\n September");
         case 10:
         printf("\n Octomber");
         case 11:
         printf("\n November");
         case 12:
         printf("\n December");
         break;
         default:
         printf("\n Invalid Input!!");
         
         
     }
    return 0;
}
