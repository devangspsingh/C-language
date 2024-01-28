#include <stdio.h>
#define MAX_SIZE 4

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if ((front == 0 && rear == MAX_SIZE - 1) || (rear == (front - 1) % (MAX_SIZE - 1))) {
        printf("Queue Overflow\n");
    } else if (front == -1) {
        front = rear = 0;
        queue[rear] = value;
        printf("Enqueued %d into the queue\n\n", value);
    } else if (rear == MAX_SIZE - 1 && front != 0) {
        rear = 0;
        queue[rear] = value;
        printf("Enqueued %d into the queue\n\n", value);
    } else {
        rear++;
        queue[rear] = value;
        printf("Enqueued %d into the queue\n\n", value);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue Underflow\n");
    } else if (front == rear) {
        int value = queue[front];
        front = rear = -1;
        printf("Dequeued %d from the queue\n\n", value);
    } else if (front == MAX_SIZE - 1) {
        int value = queue[front];
        front = 0;
        printf("Dequeued %d from the queue\n\n", value);
    } else {
        int value = queue[front];
        front++;
        printf("Dequeued %d from the queue\n\n", value);
    }
}

int main() {
    int choice, value;
    printf("Queue Operations\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Exit\n");
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printf("Bye Bye 👋\n");
                break;
            default:
                printf("That option doesn't exist 😟\n");
        }
    } while (choice != 3);
    return 0;
}
