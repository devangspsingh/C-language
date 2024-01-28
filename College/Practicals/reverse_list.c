#include <stdio.h>
#include <conio.h>
void main() 
{
  int a[5],i;
  printf("Enter the elements in the list\n");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&a[i]);
  }
 printf("Display the reverse order of the list\n");
 for(i=4;i>=0;i--)
  {
    printf("%d\n",a[i]);
  }
      getch();
}