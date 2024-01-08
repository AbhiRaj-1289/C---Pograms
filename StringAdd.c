#include<stdio.h>
struct students
{
   char name[20];
   int roll;
   char address[20];
   char qualification[10];
};
void main()
{
    struct students s1,s2,s3,s4,s5;
    printf("Enter Details for Student No.1 : ");
        printf("Enter Name of Student No. 1 : ");
        scanf("%s",&s1.name);
        printf("Enter Roll No Of Student No. 1 : ");
        scanf("%s",&s1.roll);
        printf("Enter Address Of Student No. 1 : ");
        scanf("%s",&s1.address);
        printf("Enter Qualification of Student No. 1 : ");
        scanf("%s",&s1.qualification);
        printf("Enter Name of Student No. 1 : ");
        scanf("%s",&s2.name);
        printf("Enter Roll No Of Student No. 1 : ");
        scanf("%s",&s2.roll);
        printf("Enter Address Of Student No. 1 : ");
        scanf("%s",&s2.address);
        printf("Enter Qualification of Student No. 1 : ");
        scanf("%s",&s2.qualification);
    printf("Printing Details of Student No. 1 :\n");
    printf("Name : %s",s2.name);

}