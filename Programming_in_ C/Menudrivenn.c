// WAP TO IMPLEMENT MENU DRIVEN PROGRAM TO PERFORM FOLLOWING OPERATIONS ON ARRAY
// 1. INSERTION
// 2. DELETION
// 3. SEARCHING
// 4. SORTING
// 5. DISPLAY
// 6. EXIT
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int arr[MAX];
int n = 0;
void insert();
void del();
void search();
void sort();
void display();
int main() {
    int choice;
    while (1) {
        printf("\n\nMENU\n");
        printf("1. INSERTION\n");
        printf("2. DELETION\n");
        printf("3. SEARCHING\n");
        printf("4. SORTING\n");
        printf("5. DISPLAY\n");
        printf("6. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 3:
                search();
                break;
            case 4:
                sort();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:    
                printf("Invalid choice\n");
        }
    }
    return 0;
}
void insert() {
    int pos, i, num;
    if (n == MAX) {
        printf("Array is full\n");
        return;
    }
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return;
    }
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    n++;
}
void del() {
    int pos, i;
    if (n == 0) {
        printf("Array is empty\n");
        return;
    }
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Invalid position\n");
        return;
    }
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}
void search() {
    int i, num;
    if (n == 0) {
        printf("Array is empty\n");
        return;
    }
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            printf("Number found at position %d\n", i);
            return;
        }
    }
    printf("Number not found\n");
}  
void sort() {
    int i, j, temp;
    if (n == 0) {
        printf("Array is empty\n");
        return;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void display() {
    int i;
    if (n == 0) {
        printf("Array is empty\n");
        return;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}  
