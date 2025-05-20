#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;
void enqueue_Right(int value)
{
    int i;
    if((front==-1 && rear == SIZE-1)||(front == rear+1))
    {
        printf("sorry, Queue overflowed!\n");
        return;
    }
    if(front==-1 && rear==-1)
    {
        front = 0;
        rear = 0;
        queue[rear]=value;
    }
    else
    {
        if(rear!=SIZE-1) 
        {
            rear++;
            queue[rear]=value;
        }
        else
        {
            for(i=front;i<=rear; i++)
            {
                queue[i-1]= queue[i];
            }
            front--;
            queue[rear]=value;
        }
    }
}
void display()
{
    int i;
    if(front ==-1 && rear ==-1)
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue:\n");
    for(i=front; i<=rear; i++)
    {
        printf("%d ",&queue[i]);
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
                scanf("%d",&value);
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