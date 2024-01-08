#include<stdio.h>
void main()
{
    int r,c;
    int A[r][c], B[r][c], C[r][c], i, j, k;

    printf("Enter number of rows : ");
    scanf("%d",&r);
    
    printf("Enter number of columns : ");
    scanf("%d",&c);
    
    printf("Enter elements of first array : \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter Element A%d%d : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("Enter Elements of second array : \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter Element B%d%d : ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
}