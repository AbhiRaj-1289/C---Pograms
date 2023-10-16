#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c,d,x,y;
    printf("Enter value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    printf("Enter the value of c : ");
    scanf("%f",&c);
    d = (b*b)-(4*a*c);
    //printf("value = %f",d);
    if(d > 0)
    {
        x = ((-b + sqrt(d))/2*a);
        y = ((-b - sqrt(d))/2*a);
        printf("1st root = %2lf",x);
        printf("2nd Root = %2lf",y);
    }
    else if(d == 0)
    {
        printf("There are two equal roots : ");
        x = ((-b + sqrt(d))/2*a);
        y = ((-b - sqrt(d))/2*a);
        printf("The roots are = %2lf and -%2lf",x,y);
    }
    else
    {
        printf("No Real roots");

    }
}