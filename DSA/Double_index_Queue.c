#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue_Right(int value)
{
    int i;
    if ((front == 0 && rear == SIZE - 1))
    {
        printf("Sorry, queue overflowed!\n");
        return;
    }

    if (front == -1) // First element
    {
        front = rear = 0;
        queue[rear] = value;
    }
    else if (rear < SIZE - 1)
    {
        rear++;
        queue[rear] = value;
    }
    else // Need to shift elements to the front
    {
        int j;
        for (j = front; j <= rear; j++)
        {
            queue[j - front] = queue[j];
        }
        rear = rear - front;
        front = 0;
        rear++;
        queue[rear] = value;
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue:\n");
    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int choice, value;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted: ");
            scanf("%d", &value);
            enqueue_Right(value);
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
