//WAP using used defined function to input n numbers in an array and find the average of the n numbers.
#include <stdio.h>
void input(int arr[100], int n);
void display(int arr[100], int n);
float average(int arr[100], int n);
int main()
{
    int arr[100], n;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    input(arr, n);
    printf ("The array elements are: ");
    display(arr, n);
    avg = average(arr, n);
    printf("The average of the numbers is: %.2f", avg);
    return 0;
}
void input(int arr[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void display(int arr[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
float average(int arr[100], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (float)sum / n;
}