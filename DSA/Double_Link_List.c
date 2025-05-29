#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;    
};

struct Node* start = NULL;
struct Node* NewNode = NULL;
struct Node* temp;

void allocateMemory()
{
    NewNode = (struct Node*)malloc(sizeof(struct Node));
    if(NewNode == NULL)
    {
        printf("Memory is not allocated!\n");
        exit(1);
    }
    NewNode->prev = NULL;
    NewNode->next = NULL;
}

void insert_Beginning()
{
    allocateMemory();
    printf("Enter the data to be inserted at beginning: ");
    scanf("%d", &NewNode->data);
    if(start == NULL)
    {
        start = NewNode;
    }
    else
    {
        NewNode->next = start;
        start->prev = NewNode;
        start = NewNode;
    }
    printf("\n%d is inserted at beginning.\n", NewNode->data);
}

void insert_End()
{
    allocateMemory();
    printf("Enter the data to be inserted at end: ");
    scanf("%d", &NewNode->data);
    if(start == NULL)
    {
        start = NewNode;
    }
    else
    {
        temp = start;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NewNode;
        NewNode->prev = temp;
    }
    printf("\n%d is inserted at end.\n", NewNode->data);  
}

void insert_position()
{
    int i = 0, pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    allocateMemory();
    printf("Enter the data to be inserted at position %d: ", pos);
    scanf("%d", &NewNode->data);

    if(pos == 1)
    {
        if(start == NULL)
        {
            start = NewNode;
        }
        else
        {
            NewNode->next = start;
            start->prev = NewNode;
            start = NewNode;
        }
        printf("\n%d is inserted at position 1.\n", NewNode->data);
        return;
    }

    temp = start;
    while(i < pos - 2 && temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    if(temp != NULL)
    {
        NewNode->next = temp->next;
        NewNode->prev = temp;
        if(temp->next != NULL)
            temp->next->prev = NewNode;
        temp->next = NewNode;
        printf("\n%d is inserted at position %d.\n", NewNode->data, pos);
    }
    else
    {
        printf("Position not found!\n");
        free(NewNode);
    }
}

void delete_beginning()
{
    if(start == NULL)
    {
        printf("List Underflow!\n");
        return;
    }
    temp = start;
    start = start->next;
    if(start != NULL)
        start->prev = NULL;
    free(temp);
    printf("First node deleted.\n");
}

void display()
{
    if(start == NULL)
    {
        printf("List underflow\n");
        return;
    }
    printf("List elements are: ");
    temp = start;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int choice;
    while(1)
    {
        printf("\n1. Insert data from beginning\n");
        printf("2. Insert data from end\n");
        printf("3. Insert data at specific position\n");
        printf("4. Delete data from beginning\n");
        printf("5. Display data\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert_Beginning();
            break;
        case 2:
            insert_End();
            break;
        case 3:
            insert_position();
            break;
        case 4:
            delete_beginning();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice! Try again\n");
        }
    }
    return 0;
}