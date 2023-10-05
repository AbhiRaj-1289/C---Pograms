// C program to find gu=iven number is prime or composite

#include<stdio.h>      
#include<conio.h>
void main()
{
    int x, i, temp = 0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(i = 1; i <= x; i++)
    {
        if(x % i  == 0)
        {
            temp++;
        }
    }
    if(temp == 2)
    {
        printf("%d is a prime number.",x);
    }
    else
    {
        printf("%d is not a prime number or it is a composite number.",x);
    }
}