#include<stdio.h>
#include<string.h>
void main()
{
    char name[5][20], temp[20];
    int i,j;
    printf("Enter any five names : ");
    for(i = 0; i < 5; i++)
    {
        scanf("%s",&name[i]);
    }
    for(i = 0; i < 5; i++)
    {
        /*for(j = 0; j < 4-i; j++)
        {
            if(strcmp(name[j], name[j+1])>0)        //Ascending Order
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp); 
            }
        }*/
        for(j = 0; j < 5; j++)
        {
            if(strcmp(name[j], name[j+1]) < 0)        //Descending Order
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp); 
            }
    }
    for(i = 0; i < 5; i++)
    {
        printf("\n%s",name[i]);
    }
}