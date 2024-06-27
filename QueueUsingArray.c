#include <stdio.h>
#define size 5

int queue[size], rear = -1, front = -1;

void enqueue(int x) 
{
    if (front == -1 && rear == -1) 
    {
        front = 0;
        rear = 0;
    } 
    else 
    {
        rear = rear + 1;
    }
    queue[rear] = x;
    printf("Element added = %d\n", x);
}

int dequeue() 
{
    int x;
    if (front == -1 || front > rear) 
    {
        printf("Error! underflow\n");
        return -1;
    } 
    else 
    {
        front = front + 1;
        x = queue[front];
        return x;
    }
}

void display() 
{
    int i;
    if (rear == -1) 
    {
        printf("Empty Queue\n");
    } 
    else
    {
        for (i = front; i <= rear; i++) {
            printf("Elements = %d\n", queue[i]);
        }
    }
}

void main() 
{
    enqueue(5);
    display();
    dequeue();
    display();
}
