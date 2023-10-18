#include<stdio.h>
#include<conio.h>
void main()
{
    int total,size, s = 100, m = 150, l = 200, cheese;
    printf("Welcome To Online Pizaa Bill Calculator");
    printf("Enter The Size of Your Pizaa : ");
    scanf("%c",&size); 
    if (size == "s" || size == "S")
    {
        printf("Do you want extra cheese : (y/n) :");
        scanf("%c",&cheese);
        if(cheese == "y" || cheese == "Y")
        {
            total = s + 10;
            printf("Your final bill = %d",total);
        }
        else
        {
            total = s;
            printf("Your bill = %d",total);
        }
    }
    if (size == "m" || size == "M")
    {
        printf("Do you want extra cheese : (y/n) :");
        scanf("%c",&cheese);
        if(cheese == "y" || cheese == "Y")
        {
            total = m + 10;
            printf("Your final bill = %d",total);
        }
        else
        {
            total = m;
            printf("Your bill = %d",total);
        }
    }
    if (size == "l" || size == "L")
    {
        printf("Do you want extra cheese : (y/n) :");
        scanf("%c",&cheese);
        if(cheese == "y" || cheese == "Y")
        {
            total = l + 10;
            printf("Your final bill = %d",total);
        }
        else
        {
            total = l;
            printf("Your bill = %d",total);
        }
    }
}