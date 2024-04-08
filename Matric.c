#include<stdio.h>
void main()
{
    int A[3][3], B[3][3], C[3][3], result[3][3],k, i, j;
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
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k=0; k<3; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
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
    printf("After Multiplication resultant matrix :");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}
}