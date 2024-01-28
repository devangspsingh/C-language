#include <stdio.h>
#include <conio.h>

void main()
{
    int mat1[2][2], mat2[2][2], result[2][2], x, y;

    // clrscr();
    printf("Enter the elements of first matrix\n");
    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            scanf("%d", &mat1[x][y]);
        }
    }

    printf("Enter the elements of second matrix\n");
    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            scanf("%d", &mat2[x][y]);
        }
    }

    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            result[x][y] = mat1[x][y] + mat2[x][y];
        }
    }

    printf("Result: \n\n");
    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            printf("%d ", result[x][y]);
        }
        printf("\n");
    }

    getch();
}
