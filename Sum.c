// C program to sum all the numbers in a given interval including given two numbers

#include<stdio.h>      
#include<conio.h>
void main()
{
    int x, y, i, sum;                           // variable declaration
    printf("Enter the starting number : ");     // output prompt to enter starting number
    scanf("%d",&x);                             // input stored in x
    
    printf("Enter the end number : ");          // output prompt to enter end number
    scanf("%d",&y);                             // input stored in y
    
    for(i = x; i <= y; i++)                     // condition using for loop
    {
        sum = sum + i;                          // summation of the numbers in between given numbers including them
    }
    
    printf("The sum of the numbers between %d and %d including them is %d",x,y,sum);    // final output with result
}

// End of the code