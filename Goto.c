#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num % 2 == 0)
    {
        goto label1;
    }
    else
    {
        goto label2;
    }
    label1:
        printf("Even");
    label2:
        printf("Odd");
}