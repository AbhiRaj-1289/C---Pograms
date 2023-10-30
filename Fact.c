#include<stdio.h>
#include<conio.h>
void main()
{
    int num, fact, i;
    printf("Enter a number : ");
    scanf("%d",&num);
    while (i <= num)
    {
        fact = fact*i;
        i++;  
    }
    printf("%d",fact);
}