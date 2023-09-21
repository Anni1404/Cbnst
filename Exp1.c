#include <stdio.h>
#include<math.h>
int main()
{
printf("Enter the coefficent of X'2\n");
int a,b,c;
scanf("%d",&a);
printf("Enter the coefficent of X\n");
scanf("%d",&b);
printf("Enter the coefficent of x pow zero\n");
scanf("%d",&c);
printf("Quadratic Equation= %dX'2+ %dx+ %d\n",a,b,c);
float d;
d=b*b-4*a*c;
if(d==0)
{
    printf("Discriminant is equal to zero\n");
    printf("Real and equal roots\n");
    int x=(-b+sqrt(d))/(2*a);
    printf("%d,%d",x,x);
}
else if(d>0)
{
     printf("Discriminant is greater than zer0\n");
    printf("Real and distinct roots\n");
    int x=(-b+sqrt(d))/(2*a);
    int y=(-b-sqrt(d))/(2*a);
    printf("%d,%d",x,y);
}
else if(d<010)
{
     printf("Discriminant is less than zer0\n");
    printf("Imaginary roots\n");
    float real =(-b)/(2*a);
    float imag=(sqrt(-d))/(2*a);
    printf("%f+%fi,%f-%fi",real,imag,real,imag);
}
}