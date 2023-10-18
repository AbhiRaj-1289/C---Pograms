#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 10, b = 15;
    /*a = a*b;
    a = a /10;
    b = a /15;*/
    b =  (a+b)-(a=b);
    printf("a = %d",a);
    printf("b = %d",b);
}