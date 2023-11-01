#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b , sum, product, result, div,ch;
    //clrscr();
    printf("Enter 1 to add.\n");
    printf("Enter 2 to subtract.\n");
    printf("Enter 3 to multiply.\n");
    printf("Enter 4 to divide.\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter Second nummber : ");
    scanf("%d",&b);
    switch (ch)
    {
    case 1:
        sum = a + b;
        printf("Sum of %d and %d = %d",a,b,sum);
        break;
    case 2:
        result = a - b;
        printf("Diffrence of %d and %d = %d",a,b,result);
        break;
    case 3:
        product = a * b;
        printf("Product of %d and %d = %d",a,b,product);
        break;
    case 4:
        div = a / b;
        printf("%d / %d = %d",a,b,div);
        break;
    default:
        printf("Invalid Input");
        break;
    }
}