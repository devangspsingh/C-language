
// basic operations of traversing, insertion and deletion on array
#include <stdio.h>

#define MAX_SIZE 100

void traverseArray(int arr[], int size)
{
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertElement(int arr[], int size, int element, int position)
{
    if (size >= MAX_SIZE)
    {
        printf("Array is full. Cannot insert element.\n");
        return size;
    }

    if (position < 0 || position > size)
    {
        printf("Invalid position. Cannot insert element.\n");
        return size;
    }

    for (int i = size - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    return size + 1;
}

int deleteElement(int arr[], int size, int position)
{
    if (size <= 0)
    {
        printf("Array is empty. Cannot delete element.\n");
        return size;
    }

    if (position < 0 || position >= size)
    {
        printf("Invalid position. Cannot delete element.\n");
        return size;
    }

    for (int i = position; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return size - 1;
}

int main()
{
    int arr[MAX_SIZE];
    static int size = 0;
    int choice;
    int continue_or_not;

    // Inserting elements
    size = insertElement(arr, size, 10, 0);
    size = insertElement(arr, size, 20, 1);
    size = insertElement(arr, size, 30, 2);

    printf("1:Traverse \n2:Insertion \n3:Deletion\n");
    while (continue_or_not != 0)
    {
        int position, element;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            traverseArray(arr, size);
            break;
        case 2:
            printf("Enter Element: ");
            scanf("%d", &element);
            printf("Enter Postion: ");
            scanf("%d", &position);
            size = insertElement(arr, size, element, position);
            break;

        case 3:
            printf("Enter Postion: ");
            scanf("%d", &position);
            size = deleteElement(arr, size, position);
            break;

        default:
            printf("Enter a valid Choice \n");
        }
        printf("Enter 0 to terminate or else continue: ");
        scanf("%d", &continue_or_not);
    }

    return 0;
}
