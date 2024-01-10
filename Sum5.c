#include<stdio.h>
int sum()
{
    int num = 100, i, sum = 0;
    for(i = 0; i <= 100; i++)
    {
        sum = sum + i;
    }
    return sum;
}
void main()
{
    printf("Sum Of 100 Natural Numbers = %d",sum());
}