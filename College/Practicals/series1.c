#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    // clrscr();
    printf("Enter the number of terms of this series: ");
    scanf("%d", &num);

    for(int i = 1;i<=num;i++){
        printf("%d, ",(i*i)+1);
    }
    getch();
}
