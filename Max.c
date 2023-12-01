#include<stdio.h>
void main()
{
    int ar[5], i;
    int arr[0]; 
    int max = arr[0];
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if(arr[i] > max )
        {
            max = arr[i];
        }
    }
    printf("Max element = %d", max);
}