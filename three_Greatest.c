// Online C compiler to run C program online
#include <stdio.h>

int main() {
     int a ,b ,c ;
     printf("ENter a value:");
     scanf("%d %d %d",&a,&b,&c );
     
     if(a>b&& a>c)
     {
         printf(" \n A is Greatest");
     }
     else if(b>a&& b>c)
     {
         printf(" \n B is Greatest");
     }
     else if(c>a&& c>b)
     {
         printf(" \n C is Greatest");
     }
     else if(a==b && a>c)
     {
         printf(" \n A and B are equal and Greatest");
     }
     else if(b==c && b>a)
     {
         printf(" \n B and c are equal and Greatest");
     }
     else if(a==c && a>b)
     {
         printf(" \n A and c are equal and Greatest");
     }
     else
     printf("All numbers are equal");
    return 0;
}
