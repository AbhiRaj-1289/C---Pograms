#include<stdio.h>
void main()
{
    int num,i,sum = 0;
    printf("Enter a no. :");
    scanf("%d",&num);
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }
    if(num == sum)
    {
        printf("True");
    }
    else
    {
        printf("false");
    }
}