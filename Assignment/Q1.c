// C Function to reverse a singly linked list
#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};

struct Node* createLinkedList() 
{
    struct Node* head = NULL;
    struct Node* tail = NULL;
    int value;
    printf("Enter the values for the linked list (enter 0 to stop):\n");
    while (1) 
    {
        printf("Enter value (0 to stop): ");
        scanf("%d", &value);
        if (value == 0) 
        {
            break;
        }
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        if (newNode == NULL) 
        {
            printf("Memory allocation failed!\n");
            return head;
        }
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) 
        {
            head = newNode;
            tail = newNode;
        } 
        else 
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}
struct Node* reverseLinkedList(struct Node* head) 
{
    struct Node *prev = NULL, *current = head, *next = NULL;

    while (current != NULL) 
    {
        next = current->next;  
        current->next = prev;  
        prev = current;       
        current = next;
    }
    head = prev;  
    return head;
}
void printList(struct Node* head) 
{
    while (head != NULL) 
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main() 
{
    struct Node* head = createLinkedList();
    printf("Original Linked List: ");
    printList(head);
    head = reverseLinkedList(head);
    printf("Reversed Linked List: ");
    printList(head);
    return 0;
}
