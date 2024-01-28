#include <stdio.h>

#define MAX_SIZE 100

void traverseArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

int insertElement(int arr[], int size, int element, int position) {
    if (size >= MAX_SIZE) {
        printf("Array is full. Cannot insert element.\n");
        return size;
    }

    if (position < 0 || position > size) {
        printf("Invalid position. Cannot insert element.\n");
        return size;
    }

    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
 
    return size + 1;
}

int deleteElement(int arr[], int size, int position) {
    if (size <= 0) {
        printf("Array is empty. Cannot delete element.\n");
        return size;
    }

    if (position < 0 || position >= size) {
        printf("Invalid position. Cannot delete element.\n");
        return size;
    }

    int deletedElement = arr[position];

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return size - 1;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position;
   
    traverseArray(arr, size);

    printf("Array Operations:\n");
    printf("1. Traverse\n");
    printf("2. Insert\n");
    printf("3. Delete\n");
    printf("4. Exit\n");
    
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                traverseArray(arr, size);
                break;
            case 2:
                printf("Enter the element to insert: "); scanf("%d", &element);
                printf("Enter the position to insert: "); scanf("%d", &position);
                size = insertElement(arr, size, element, position);
                break;
            case 3:
                printf("Enter the position to delete: "); scanf("%d", &position);
                size = deleteElement(arr, size, position);
                break;
            case 4:
                printf("Bye Bye 👋\n");
                break;
            default:
                printf("That option Don't Exist 😟\n");
        }
        if (choice!=1 && choice!= 4){
            traverseArray(arr, size);
        }
        
    } while (choice != 4);

    return 0;
}
