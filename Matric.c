#include<stdio.h>
void main()
{
    int A[3][3], B[3][3], C[3][3], i, j;
    printf("Enter elements of first array : \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter Element A%d%d : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter Elements of second array : \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter Element B%d%d : ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("After Addition Resultant Matric : \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}