#include<stdio.h>
void main()
{
    int num = 43;
    int *var = &num;
    printf("%p",*var);
}