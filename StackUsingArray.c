#include <stdio.h>
#include <stdlib.h>
int stack[100],i , j, choice = 0, n , top = - 1, x;
void push()
{
    int value;
    if(top == n)
    {
        printf("\n Overflow \n");
    }
    else
    {
        printf("Enter the value to push : ");
        scanf("%d",&value);
        top = top + 1;
        stack[top] = value;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("\n Underflow \n");
    }
    else
    {
        int x = stack[top];
        printf("Popped element = %d",x);
        top = top - 1;
    }
}
void display()
{
    if(top == -1)
    {
        printf("Stack is Empty");
    }
    else
    {
        for(i = top; i >= 0; i--)
    {
        printf("%d\n",stack[i]);
    }
    }
}
int peek()
{
    if(top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        return stack[top];
    }
}
void main()
{
    printf("Enter the number of element in stack : ");
    scanf("%d",&n);
    while(choice != 5)
    {
        printf("Choose one of the following : ");
        printf("\n1. Push\n 2. Pop\n 3. Peek\n 4. Display\n 5. Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: push();
                break;

        case 2: pop();
                break;

        case 3: x = peek();
                printf("Element at top = %d",x);
                break;
        
        case 4: display();
                break;
        
        case 5: printf("Exit Successfully");
                break;
        
        default: printf("Invalid choice");
                 break;
        }
    }
}