// C program to add numbers upto given number starting from 0

#include<stdio.h>      
#include<conio.h>
void main()
{
    int x, i, sum;                                                      // variable declaration
    printf("Enter the numbers upto which sum is to be find : ");        // output prompt
    scanf("%d",&x);                                                     // storing the value in "x"
    
    for(i = 0; i <= x; i++)                                             // loop to add numbers
    {
        sum = sum + i;                                                  // adding the numbers
    }

    printf("The sum of the numbers upto %d is %d",x,sum);    // final output with result
}

// End of the code