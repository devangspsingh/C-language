
#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item)
{
    if (top >= MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
    printf("%d pushed to stack\n", item);
}

int pop()
{
    if (top < 0)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int peek()
{
    if (top < 0)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

int isEmpty()
{
    return top == -1;
}

int isFull()
{
    return top == MAX_SIZE - 1;
}

int size()
{
    return top + 1;
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    int choice, item;
    char continueChoice;

    do
    {
        printf("Enter your choice:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check if stack is empty\n");
        printf("5. Check if stack is full\n");
        printf("6. Get size of stack\n");
        printf("7. Display stack elements\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the item to push: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                printf("%d popped from stack\n", pop());
                break;
            case 3:
                printf("Top element: %d\n", peek());
                break;
            case 4:
                if (isEmpty())
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    printf("Stack is not empty\n");
                }
                break;
            case 5:
                if (isFull())
                {
                    printf("Stack is full\n");
                }
                else
                {
                    printf("Stack is not full\n");
                }
                break;
            case 6:
                printf("Size of stack: %d\n", size());
                break;
            case 7:
                display();
                break;
            default:
                printf("Invalid choice\n");
                break;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continueChoice);
    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}

