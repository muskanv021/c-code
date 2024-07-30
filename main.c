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


