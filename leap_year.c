#include <stdio.h>

int main() {
    
    int a ;
   
    printf("Enter a number: ");
    scanf("%d", &a);
    
    if (a%4==0) {
       
        printf("\n Leap year", a);
    } 
    else {
       printf("\nNot Leap Year", a);
    }

    return 0;
}
