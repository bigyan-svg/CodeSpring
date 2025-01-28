//WAP to find the average of n array elements using function in c using function prototype
#include <stdio.h>
void input(int arr[100], int n);
void display(int arr[100], int n);
float average(int arr[100], int n);
int main ()
{
    int n, arr[100];
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    input(arr, n);
    printf("\nThe array elements are: ");
    display(arr, n);
    avg = average(arr, n);
    printf("\nThe average of the array elements is: %.2f", avg);
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
float average(int arr[100], int n)
{
    int i, sum = 0;
    float avg;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    avg = (float)sum / n;
    return avg;
}