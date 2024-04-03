#include <stdio.h>

int main() 
{
    int arr[100];
    int i, size, position, element;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements: ");
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where element is to be inserted: ");
    scanf("%d", &position);

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    
    for (i = size - 1; i >= position - 1; i--) 
    {
        arr[i + 1] = arr[i];
    }

    arr[position - 1] = element;
    size++;

    printf("Array after insertion: \n");
    for (i = 0; i < size; i++) 
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
