// C program to covert degree celcius to degree fahrenheit

#include<stdio.h>      
#include<conio.h>
void main()                                                // main function
{
    int c, f;                                              // variable declaration 
    printf("Enter Temperature in degree Celcius : ");       // output screen
    scanf("%d",&c);                                         // storing user input in variable "c"
    f = (1.8 * c) + 32;                                     // temperature conversion formula and storing result in variable "f"
    printf("Temperature in Degree Fahrenheit = %d",f);      // printing the result
}

// End of program