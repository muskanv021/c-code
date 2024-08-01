----------------------------------########################3-------------------

#include <stdio.h>

int main() {
    
    int a, b;
    float c;
    printf("Enter 2 number values: ");
    scanf("%d %d", &a, &b);
    
    if (b != 0) {
        c = (float)a / b;
        printf("\nDivision of %d and %d is %.2f", a, b, c);
    } else {
        printf("\nCannot divide by zero!!");
    }

    return 0;
}
