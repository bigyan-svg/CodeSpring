//WAP to input n numbers of array and display them both using function in c using function prototype
#include <stdio.h>
void input(int arr[100], int n);
void display(int arr[100], int n);
int main()
{
    int n, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    input(arr, n);
    printf("\nThe array elements are: ");
    display(arr, n);
    return 0;
}
void input(int arr[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i  );
        scanf("%d", &arr[i]);
    }
}
void display(int arr[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
