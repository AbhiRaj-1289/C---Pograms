#include<stdio.h>
void main()
{
    int i,j,k,c,r;
    int a[100][100],b[100][100],result[100][100];

    printf("enter no. of row and coloum : ");
    scanf("%d%d",&r,&c);
    printf("enter first matrix elements : ");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("first matrix : \n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("enter second matrix element : ");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("second matrix : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("resultant matrix : \n");
    result[i][j]=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=0;k<c;k++)
            {
                result[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}