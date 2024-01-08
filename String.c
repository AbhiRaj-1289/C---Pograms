#include<stdio.h>
void main()
{
    char ch1[20] = {'h','e','l','l','o','w','o','r','l','d','\n'};
    char ch2[30];
    int i = 0;
    while(ch1[i] != '\0')
    {
        ch2[i] = ch1[i];
        i++;
    }
    ch2[i] = '\0';
    printf("Value of Second String = %s",ch2);
}