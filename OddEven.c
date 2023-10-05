                    //Progran in c language to find out the given number is whether an odd or even number
#include<stdio.h>      
#include<conio.h>
void main()         //Main function
{
    int num; // variable for storing a number
    printf("Enter A Number : ");        //output statement
    scanf("%d",&num);       //input function
    if(num % 2 == 0)        //condition
    {
       printf("%d is an even number",num);      //executed if condition is true
    }
    else
    {
        printf("%d is an odd number",num);      //executed if condition is false
    }
}

//End of Code