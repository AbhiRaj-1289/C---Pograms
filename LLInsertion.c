#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head;


//function to create sinnly linked list
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node*)malloc(sizeof(struct node*));

    
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; 
        head->next = NULL; 

        temp = head;

        
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; 
                newNode->next = NULL; 

                temp->next = newNode; 
                
                temp = temp->next; 
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

//Function to insert node
void insertion(struct node *head, int number)
{
    int x;
    printf("Enter data to be inserted : ");
    scanf("%d",&x);
    struct node *temp, *new_node;
    temp = head;
    new_node = (struct node*) malloc(sizeof(struct node*));
    new_node -> data = x;
    if(head == NULL)
    {
        printf("Invalid!");
    }
    else
    {
        while (temp -> data != number)
        {
            temp = temp -> next;
        }
        new_node -> next = temp -> next;
        temp -> next = new_node;
    }
}

//Function to display linked list
void displayList()
{
    struct node *temp;

    
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); 
            temp = temp->next;                 
        }
    }
}
void main()
{
    int n, data, value;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

    printf("Enter node value after value to be inserted : ");
    scanf("%d",&value);
    
    insertion(head,value);
    
    printf("Linked List after insertion \n");
    displayList();
}