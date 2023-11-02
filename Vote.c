#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    char citizenship;
    printf("Enter age : ");
    scanf("%d",&age);
    fflush(stdin);
    printf("are you citizen (y/n): ");
    scanf("%c",&citizenship);
    if(age>=18 )
    {
        if(citizenship == 'y' || citizenship == 'Y')
        {
            printf("You are Eligible to vote");
        }
        else
        {
            printf("Only citizen are allowed.");
        }
    }
    else
    {
        printf("You are not of legal age to vote!");
    }
}

