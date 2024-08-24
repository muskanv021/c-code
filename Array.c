// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a[5]={1,3,3,4,5};
   printf("%d",a[5]);
   

    return 0;
}
-------------------------------------------------------
  // Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a[5],i;
   printf("Enter 5 number");
   
  
   for(i=1;i<=5;i++)
   {
   scanf("%d",&a[i]);
   }
   for(i=1;i<=5;i++)
   {
   printf("%d \t",a[i]);
   }
   
   

    return 0;
}
------------------------------------------------------------------------
  // Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a[5]={ 2,3,4,5,5},i;
   printf("Enter 5 number");
   
  
 
   for(i=0;i<5;i++)
   {
   printf("%d \t",a[i]);
   }
   
   

    return 0;
}

--------------------------------------------------------------------------------
  According to size
    // Online C compiler to run C program online
#include <stdio.h>
#define size 10

int main() {
   int a[size],i;
   printf("Enter a number");
   
  
   for(i=1;i<=size;i++)
   {
   scanf("%d",&a[i]);
   }
   for(i=1;i<=size;i++)
   {
   printf("%d \t",a[i]);
   }
   
   

    return 0;
}
