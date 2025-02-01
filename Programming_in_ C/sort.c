// WAP to sort 1 dimensional array in ascending order using function and function prototype
#include <stdio.h>
void input(int arr[100], int n);
void display(int arr[100], int n);
void sort(int arr[100], int n);
int main()
{
    int n, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    input(arr, n);
    printf("\nThe array elements are: ");
    display(arr, n);
    sort(arr, n);
    printf("\nThe sorted array elements are: ");
    display(arr, n);
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
void sort(int arr[100], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
//output
// Enter the number of elements: 5
// Enter a[0]: 5
// Enter a[1]: 4
// Enter a[2]: 3
// Enter a[3]: 2
// Enter a[4]: 1
// The array elements are: 5 4 3 2 1
// The sorted array elements are: 1 2 3 4 5