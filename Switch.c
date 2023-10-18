#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b , sum, product, result, div,ch;
    printf("Enter 1 to add.\n");
    printf("Enter 2 to subtract.\n");
    printf("Enter 3 to multiply.\n");
    printf("Enter 4 to divide.\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter first number : ");
        scanf("%d",&a);
        printf("Enter Second nummber : ");
        scanf("%d",&b);
        sum = a + b;
        printf("Sum of %d and %d = %d",a,b,sum);
        break;
    case 2:
        printf("Enter first number : ");
        scanf("%d",&a);
        printf("Enter Second nummber : ");
        scanf("%d",&b);
        result = a - b;
        printf("Diffrence of %d and %d = %d",a,b,result);
        break;
    case 3:
        printf("Enter first number : ");
        scanf("%d",&a);
        printf("Enter Second nummber : ");
        scanf("%d",&b);
        product = a * b;
        printf("Product of %d and %d = %d",a,b,product);
        break;
    case 4:
        printf("Enter first number : ");
        scanf("%d",&a);
        printf("Enter Second nummber : ");
        scanf("%d",&b);
        div = a / b;
        printf("%d / %d = %d",a,b,div);
        break;
    default:
        printf("Invalid Input");
        break;
    }
}