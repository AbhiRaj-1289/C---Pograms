#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("enter no. of elements : ");
    scanf("%d",&n);
    printf("enter array elements :");

    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}