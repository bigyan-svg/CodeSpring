//write a menu driven program to perform the following operations on circular queue without structure
//1. enqueue
//2. dequeue
//3. display
//4. total elements
//5. exit
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;
void enqueue()
{
    int num;
    if ((rear + 1) % SIZE == front) // Queue is full
    {
        printf("Queue is full\n");
        return;
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &num);
    if (front == -1) // First element to be inserted
    {
        front = 0;
    }
    rear = (rear + 1) % SIZE; // Circular increment
    queue[rear] = num;
}
void dequeue()
{
    if (front == -1) // Queue is empty
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted element: %d\n", queue[front]);
    if (front == rear) // Last element deleted
    {
        front = rear = -1; // Reset queue
    }
    else
    {
        front = (front + 1) % SIZE; // Circular increment
    }
}
void display()
{
    if (front == -1) // Queue is empty
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1)
    {
        printf("%d ", queue[i]);
        if (i == rear) // Last element reached
            break;
        i = (i + 1) % SIZE; // Circular increment
    }
    printf("\n");
}
void total_elements()
{
    if (front == -1) // Queue is empty
    {
        printf("Queue is empty\n");
        return;
    }
    int count = (rear - front + SIZE) % SIZE + 1; // Circular calculation
    printf("Total elements in queue: %d\n", count);
}
int main()
{
    int choice;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Total elements\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                total_elements();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

