#Hello world code
#include<stdio.h>

int main()
{
  printf("Hello World");
  return 0;
}

#sum of twol values
#include<stdio.h>

int main()
{
  int a,b,c;
  a=1;
  b=6;
c=a+b;
printf("Sum of the value is:-%d",c);

return 0;
}

#sum value input to user 

#include<stdio.h>

int main()
{
  int a,b,c;
  
  printf("First value is:-");
  scanf("%d",&a);

  printf("Second value is:-");
  scanf("%d",&b);
  c=a+b;
  printf("%d",c);


  return 0;
}

#Swapping variable without use of extra variable

#include<stdio.h>

int main()
{
  int a,b;

printf("Enter first value:-");
scanf("%d",&a);
printf("Enter Second value:-");
scanf("%d",&b);

a=a+b;
b=a-b;
a=a-b;

printf("After swapping first number is:- %d",a);
printf("After swapping Second number is:-%d",b);


return 0;
}

#Swapping use of extra variable
#include<stdio.h>

int main()
{
  int a,b,c;

printf("Enter first value:-");
scanf("%d",&a);
printf("Enter Second value:-");
scanf("%d",&b);

c=a;
a=b;
b=c;

printf("After swapping first number is:- %d",a);
printf("After swapping Second number is:-%d",b);


return 0;
}


#Multiplication of two value

#include <stdio.h>

int main() {
    
    int a,b,c;
    printf("ENter two number:-");
    scanf("%d %d",&a, &b);
    
    c=a*b;
    printf("Product of number is :-%d",c);

    return 0;
}
#Split the values

#include <stdio.h>

int main() {
    
    int a,b,c,d,x,s;
    printf("ENter 4 digit number:-");
    scanf("%d",&x);
    
    a=x/1000;
    b=(x/100)%10;
    c=(x/10)%10;
    d=x%10;
    
    printf("\n A:%d \n B:%d \n c:%d \n d=%d \n",a,b,c,d);
    s=a+b+c+d;
    printf("\n Sum of all number is:-%d",s);


    return 0;
}

