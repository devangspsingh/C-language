#include <stdio.h>
#include "search_algo.c"

void main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    int choice;

    printf("1:Binary Search \n2:Linear Search\n\n");

    while (1)
    {
        printf("Enter the element to search (or -1 to exit): ");
        scanf("%d", &key);

        if (key == -1)
            break;
        printf("Which Search to perform: ");
        scanf("%d", &choice);

        int result;
        switch (choice)
        {
        case 1:
            result = linearSearch(arr, n, key);
            break;

        case 2:
            result = binarySearch(arr, 0, n - 1, key);
            break;

        default:
            printf("Invalid choice\n");
            result = -2;
            break;
        }

        if (result == -1)
        {
            printf("Element not found\n\n");
        }
        else if (result != -2)
        {
            printf("Element found at index %d\n\n", result);
        }
    }
}