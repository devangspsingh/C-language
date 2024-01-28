#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, sum;
    // clrscr();
    printf("Enter two numbers two get the value of their sum\n");
    scanf("%d%d", &num1,&num2);
    sum=num1+num2;
    printf("%d + %d = %d",num1,num2,sum);
    getch();
}