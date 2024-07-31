#include <stdio.h>

int main() {
    
    int a ;
   
    printf("Enter a number: ");
    scanf("%d", &a);
    
    if (a%2==0) {
       
        printf("\nNumberis %d even", a);
    } else {
       printf("\nNumberis %d odd", a);
    }

    return 0;
}
