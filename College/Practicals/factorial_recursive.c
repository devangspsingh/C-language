#include <stdio.h>
#include <conio.h>

void main()
{
    int num, result;
    int factorial(int);
    // clrscr();
    printf("Enter the number to find its factorial: ");
    scanf("%d", &num);

    result = factorial(num);
    printf("Factorial of %d, %d! = %d",num,num,result);
    getch();
}

int factorial(int num)
{
    int result;
    if (num == 1)
    {
        result = 1;
        return (result);
    }
    result = num * factorial(num - 1);
    return (result);
}
