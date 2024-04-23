#include <stdio.h>
#include <stdlib.h>


/*struct Node {
    int data;
    struct Node* next;
};


void insertAtBeginning(struct Node** head_ref, int new_data) {
    
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    new_node->data = new_data;
    
    new_node->next = *head_ref;
    
    *head_ref = new_node;
}


void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    
    struct Node* head = NULL;


    insertAtBeginning(&head, 6);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 2);

   
   
    printf("Linked List: ");
    printList(head);

    return 0;
}
*/
struct node 
    {
        int *head, *new_node, *temp;
        head = NULL;
    };
void create()
{
    
    new_node = (struct node*)malloc(sizeof(struct node));
    
}