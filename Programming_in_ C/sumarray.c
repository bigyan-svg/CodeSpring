//WAP to add two array and store them in third array in c using function and function prototype
#include <stdio.h>
void input (int a[100], int n);
void display (int a[100], int n);
void sum (int a[100], int b[100], int c[100], int n);
int main()
{
    int a[100], b[100], c[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the first array: ");
    input(a, n);
    printf("Enter the elements of the second array: ");
    input(b, n);
    sum(a, b, c, n);
    printf("The elements of the first array are: ");
    display(a, n);
    printf("The elements of the second array are: ");
    display(b, n);
    printf("The elements of the third array are: ");
    display(c, n);
    return 0;
}
void input (int a[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
void display (int a[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void sum (int a[100], int b[100], int c[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
}  