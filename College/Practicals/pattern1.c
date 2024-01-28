#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    // clrscr();
    printf("Enter the limit of this pattern: ");
    scanf("%d", &num);

    for(int i = 1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    getch();
}
