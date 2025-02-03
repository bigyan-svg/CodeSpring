//wap to accept n integers and stored them in an array name arr. the odd elements in arr should be copied
// to another array oar and even elements should be copied to another array ear. display the contents of oar and ear
#include <stdio.h>
void input(int arr[100], int n);
void display(int arr[100], int n);
void copy(int arr[100], int n, int oar[100], int ear[100]);
int main()
{
    int n, arr[100], oar[100], ear[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    input(arr, n);
    printf("\nThe array elements are: ");
    display(arr, n);
    copy(arr, n, oar, ear);
    printf("\nThe odd array elements are: ");
    display(oar, n);
    printf("\nThe even array elements are: ");
    display(ear, n);
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
void copy(int arr[100], int n, int oar[100], int ear[100])
{
    int i, j = 0, k = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            ear[j] = arr[i];
            j++;
        }
        else
        {
            oar[k] = arr[i];
            k++;
        }
    }
    printf("\nThe odd array elements are: ");
    display(oar, n);
    printf("\nThe even array elements are: ");
    display(ear, n);
}
//output
// Enter the number of elements: 5
// Enter a[0]: 1
// Enter a[1]: 2
// Enter a[2]: 3
// Enter a[3]: 4
// Enter a[4]: 5
// The array elements are: 1 2 3 4 5
// The odd array elements are: 1 3 5
// The even array elements are: 2 4
