#include<stdio.h>
#include<conio.h>
void main()
{
    int rows = 5;
    int i,j;
    for(i= 0; i <= rows;i++)
    {
        for(j=1; j <=rows-i;j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}