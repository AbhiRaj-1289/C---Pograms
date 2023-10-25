#include <stdio.h>
int main() 
{
    int total, small = 100, medium = 150, large = 200;
    char size, cheese;
    printf("Welcome To Online Pizza Bill Calculator \n");
    printf("Enter The Size of Your Pizza : ");
    scanf("%c", &size);  

    if(size == 's' || size == 'S') 
    {
        printf("Do you want extra cheese : (y/n) :");
        scanf(" %c", &cheese);  

        if(cheese == 'y' || cheese == 'Y') 
        {
            total = small + 10;
            printf("Your final bill = %d", total);
        } 
        else 
        {
            total = small;
            printf("Your bill = %d", total);
        }
    } 
    else if(size == 'm' || size == 'M') 
    {
        printf("Do you want extra cheese : (y/n) :");
        scanf(" %c", &cheese);  

        if(cheese == 'y' || cheese == 'Y') 
        {
            total = medium + 10;
            printf("Your final bill = %d", total);
        } 
        else 
        {
            total = medium;
            printf("Your bill = %d", total);
        }
    } 
    else if(size == 'l' || size == 'L') 
    {
        printf("Do you want extra cheese : (y/n) :");
        scanf(" %c", &cheese);  

        if(cheese == 'y' || cheese == 'Y') {
            total = large + 10;
            printf("Your final bill = %d", total);
        } else {
            total = large;
            printf("Your bill = %d", total);
        }
    } 
    else 
    {
        printf("Invalid Size Input!");
    }
    return 0;
}