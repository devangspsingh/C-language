#include <stdio.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

int isFull() {
    return rear == MAX_SIZE - 1;
}

int isEmpty() {
    return front == -1 || front > rear;
}

void enqueue(int item) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue element.\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = item;
    printf("%d enqueued to the queue.\n", item);
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return -1;
    }
    int item = queue[front];
    front++;
    printf("%d dequeued from the queue.\n", item);
    return item;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    
    dequeue();
    dequeue();
    dequeue();
    
    return 0;
}
