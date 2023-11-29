#include<stdio.h>
void main()
{
    int a[5], sum = 0, i;
    printf("Enter Elements : ");
    for(i = 0; i < 5; i++)
    {
         scanf("%d",&a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
        sum = sum + a[i];
    }
    printf("%d",sum);
}
