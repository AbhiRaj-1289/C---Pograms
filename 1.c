#include<stdio.h>
void main()
{
	int r,c,i,j,r1,c1,k;
	int a[100][100],b[100][100],res[100][100];
	printf("enter values of first matrix row and coloum : \n");
	scanf("%d%d",&r,&c);

	printf("enter values of second matrix row and coloum : \n");
	scanf("%d%d",&r1,&c1);

	if(c == r1)
	{
		printf("enter first matrix elements : \n");

		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}

		printf("enter second matrix elements : \n");

		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}

		for(i=0;i<r;i++)
		{
			for(j=0;j<c1;j++)
			{
				for(k=0;k<c1;k++)
				{
					res[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		printf("final matrix is : \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d\t",res[i][j]);
			}
            printf("\n");
		}
		
	}
	else
	{
			printf("matrix multiplication is not possible.");
	}

}