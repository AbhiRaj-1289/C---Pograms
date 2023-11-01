#include<stdio.h>
#include<conio.h>
void fact()
{
    int num, fact=1, i=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial of %d = %d",num,fact);
}
void main()
{
    fact();
}