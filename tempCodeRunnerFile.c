#include <stdio.h>
int add(int *);
int main()
{
    int a=10;
    int b = add(&a);
    printf("addition : %d", b);
}
int add(int *x)
{
    int z = x+10 ;
    return z;
}