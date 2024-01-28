#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    // clrscr();
    printf("Enter a number to check whether it is odd or even: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is EVEN", num);
    }
    else
    {
        printf("%d is ODD", num);
    }
    getch();
}
