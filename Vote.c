/*#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    char citizenship;
    printf("Enter age : ");
    scanf("%d",&age);
    printf("are you citizen (y/n): ");
    scanf(" %c",&citizenship);
    if(age>=18 && age<=90)
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
*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char c, result;
    printf("Enter a character : ");
    scanf("%c",&c);
    if(islower(c))
    {
        c = toupper(c);
        printf("Entered Character in uppercase = %c",c);
    }
    else if(isupper(c))
    {
        c = tolower(c);
        printf("Entered character in uppercase = %c",c);
    }
    else
    {
        printf("You Entered an invalid character!");
    }
}