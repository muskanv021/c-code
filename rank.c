#include <stdio.h>

int main() {
    
    int a;
   
    printf("Enter Your Roll no: ");
    scanf("%d", &a);
    
    if (a==24) {
       
        printf("1st Rank");
    } 
    else if(a==15)
    {
       printf("2nd rank");
    }
     else
    {
       printf("Better luck next time!!");
    }

    return 0;
}
