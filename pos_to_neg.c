
#include <stdio.h>

int main() {
    
    int a,b,c;
    printf("ENter 2  number value:-");
    scanf("%d %d",&a, &b);
    
    if(a<0){
        a=-a;
    }
    if(b<0)
    {
        b=-b;
    }
    

    c=a+b;
    printf("\n Sum of %d and %d number is:-%d",a,b,c);


    return 0;
}
