#include <stdio.h>
#include <conio.h>

void main()
{
    int limit;
    printf("Enter the limit of the array: ");
    scanf("%d", &limit);

    int arr[limit], i, element;

    printf("Enter the Element of the array \n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Element to search \n");
    scanf("%d", &element);
    for (i = 0; i < limit; i++)
    {
        if (arr[i] == element)
        {
            printf("%d is at %d index", element, i);
            break;
        }
    }

    if (i == limit)
    {
        printf("Element not found! \n");
    }
}
