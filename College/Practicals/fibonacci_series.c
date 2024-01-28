#include <stdio.h>
#include <conio.h>

void main()
{
    int num, x, y, z;
    x = 0, y = 1;
    clrscr();
    printf("Enter the number of terms of fibonacci series: ");
    scanf("%d", &num);
    printf("%d, %d, ", x, y);

    for (int i = 3; i <= num; i++)
    {
        z = x + y;
        printf("%d, ", z);
        x = y, y = z;
    }
    getch();
}
