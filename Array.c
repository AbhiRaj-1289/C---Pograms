#include<stdio.h>
void main()
{
    int r,c,i,j,k;
    int a[100][100], b[100][100], result[100][100];
    printf("Enter no of rows :");
    scanf("%d",&r);
    printf("Enter no of columns : ");
    scanf("%d",&c);
    printf("Enter elements of first matrix : ");
    for(i = 0;i < r; i++)
    {
        for(j= 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("First Matrix :\n ");
    for(i = 0;i < r; i++)
    {
        for(j= 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements of Second matrix : ");
    for(i = 0;i < r; i++)
    {
        for(j= 0; j < c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Second Matrix :\n ");
    for(i = 0;i < r; i++)
    {
        for(j= 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Resultant Matrix :\n ");
    for(i = 0;i < r; i++)
    {
        for(j= 0; j < c; j++)
        {
            for (k = 0; k < c; k++)
            {
                result[i][j] += a[i][k] * b[k][j]; 
            }
        }
    }
    for(i = 0;i < r; i++)
    {
        for(j= 0; j < c; j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}