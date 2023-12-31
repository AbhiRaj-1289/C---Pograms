#include <stdio.h>
int factorial(int num) 
{
    int fact = 1, i;
    if (num == 0 || num == 1) 
    {
        return 1;
    } 
    else 
    {
        for (i = 2; i <= num; i++) 
        {
            fact *= i;
        }
        return fact;
    }
}
int main() {
    int number, result;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&number);

    if (number < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else 
    {
        result = factorial(number);
        printf("Factorial of %d is: %d", number, result);
    }

    return 0;
}