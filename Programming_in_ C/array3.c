#include <stdio.h>

void input(int arr[100], int n);
void display(int arr[100], int n);
int sum_even(int arr[100], int n);
int sum_odd(int arr[100], int n);

int main()
{
    int n, arr[100], even_sum, odd_sum;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    input(arr, n);
    printf("\nThe array elements are: ");
    display(arr, n);
    even_sum = sum_even(arr, n);
    printf("\nThe sum of even elements is: %d", even_sum);
    odd_sum = sum_odd(arr, n);
    printf("\nThe sum of odd elements is: %d", odd_sum);
    return 0;
}

void input(int arr[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
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

int sum_even(int arr[100], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int sum_odd(int arr[100], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}