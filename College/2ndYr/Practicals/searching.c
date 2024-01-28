#include <stdio.h>

void traverseArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int choice, element;
   
    traverseArray(arr, size);

    printf("Array Operations:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search\n");
    printf("3. Exit\n");
    
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the key to search: "); scanf("%d", &element);
                int linearSearchResult = linearSearch(arr, size, element);
                if (linearSearchResult == -1) {
                    printf("Element not found.\n");
                } else {
                    printf("Element found at index %d.\n", linearSearchResult);
                }
                break;
            case 2:
                printf("Enter the key to search: "); scanf("%d", &element);
                int binarySearchResult = binarySearch(arr, size, element);
                if (binarySearchResult == -1) {
                    printf("Element not found.\n");
                } else {
                    printf("Element found at index %d.\n", binarySearchResult);
                }
                break;
            case 3:
                printf("Bye Bye 👋\n");
                break;
            default:
                printf("That option Don't Exist 😟\n");
        }
        
    } while (choice != 3);

    return 0;
}
