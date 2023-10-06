// C program to print table of the inputted number upto 10 multiples.

#include<stdio.h>      
#include<conio.h>
void main()
{
    int i, num, result = 1;                             // variable declaration
    
    printf("Enter Number to print its table : ");       // Output prompt
    scanf("%d",&num);                                   // Storing inputted value in 'num' variable
    
    for(i = 1; i <= 10; i++)                            // for loop initialisation to run 10 times 
    {
        result = num * i;                               // calculating the value of each multiple for given 'num'
        printf("%d X %d = %d\n",num,i,result);          // printing the result
    }
}

// End of the code