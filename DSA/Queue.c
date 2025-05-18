#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int front = -1, rear = -1;
void enqueue()
{
    int num;
    if (rear == size-1)
    {
        printf("Queue is overflowed! \n");
        return;
    }
    printf("Enter th number to inserted: ");
    scanf("%d",&num);
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
       rear++;
    }
    queue[rear] = num;
}
void dequeue()
{
    int del_item;
    if (front == -1 || front>rear)
    {
        printf("Queue is empty! ");
        return;
    }
    del_item = queue[front];
    if(front==rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
    printf("Deleted item = %d\n", del_item);
}
void display()
{
    int i;
    if (front ==-1 || front>rear)
    {
        printf("Queue is empty! \n");
        return;
    }
    printf("Queue elements are: ");
    for(i = front; i<=rear; i++)
    {
        printf("%d\t", queue[i]);
    }
    printf("\n");
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
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;


}
