// C program to find sum of only odd numbers between two inputted numbers.

#include<stdio.h>      
#include<conio.h>
void main()
{
    int x, y, i, sum;                            // variable declaration
    printf("Enter the starting number : ");     // output prompt to enter starting number
    scanf("%d",&x);                             // input stored in x
    
    printf("Enter the end number : ");          // output prompt to enter end number
    scanf("%d",&y);                             // input stored in y

    for(i = x; i <= y; i++)                     // for loop for adding the numbers
    {
        if(i % 2 != 0)                          // condition to  get only odd numbers
        {
            sum = sum + i;                      // adding the final numbers
        }
    }

    printf("The sum of the odd numbers between %d and %d including them is %d",x,y,sum);    // final output with result
}

// End of the code 