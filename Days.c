#include<stdio.h>
#include<conio.h>
void main()
{
    int day;
    printf("Enter a Number : ");
    scanf("%d",&day);
    if(day == 1)
    {
        printf("You entered %d which is Sunday",day);
    }
    else if(day == 2)
    {
        printf("You entered %d which is Monday",day);
    }
}