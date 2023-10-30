#include<stdio.h>
void main()
{
    char c;
    printf("Enter a chracter : ");
    scanf("%c",&c);
    if(c >= 'a' && c <= 'z')
    {
        c = c - 32;
    }
    else if(c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }
    printf("Converted char = %c",c);
}