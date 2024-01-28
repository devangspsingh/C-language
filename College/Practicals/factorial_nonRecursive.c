#include <stdio.h>
#include <conio.h>

void main()
{
    int num, result;
    int factorial(int);
    printf("Enter the number to find its factorial: ");
    scanf("%d", &num);
    result = factorial(num);
    printf("Factorial of %d, %d! = %d", num, num, result);
    getch();
}

int factorial(int num)
{
    int result = 1;
    while (num >= 1)
    {
        result = result * num;
        num = num - 1;
    }
    return (result);
}
