// Online C compiler to run C program online
#include <stdio.h>

int main() {
     int x;
     printf("ENter your current month:");
     scanf("%d",&x);
     switch(x)
     {
         case 1:
         printf("\n Sunday");
         case 2:
         printf("\n Monday");
         case 3:
         printf("\n Tuesday");
         case 4:
         printf("\n Wednesday");
         case 5:
         printf("\n Thursday");
         case 6:
         printf("\n Friday");
         case 7:
         printf("\n Saturday");
         break;
         default:
         printf("\n Invalid Input!!");
         
         
     }
    return 0;
}
