#include<stdio.h>
#include<conio.h>
int main() 
{
   int i, j, rows,k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++)
   {
        for(j= 1; j <= 2*(rows-i); j++)
        {   
            printf(" ");
        }
        for(k = 1; k < 2*i; k++)
        {
            printf("* ");
        }
        printf("\n");
   }
   return 0;
}
