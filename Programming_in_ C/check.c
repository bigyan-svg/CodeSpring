// WAP to check whether the given number is present in array or not using function in c if present then display the index of that number
#include <stdio.h>
void input(int a[100], int n);
void display(int a[100], int n);
int check(int a[100], int n, int num);
int main()
{
    int a[100], n, num, index;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    input(a, n);
    printf ("The elements of the array are: ");
    display(a, n);
    printf("Enter the number to be checked: ");
    scanf("%d", &num);
    index = check(a, n, num);
    if (index == -1)
    {
        printf("The number is not present in the array\n");
    }
    else
    {
        printf("%d is present at index %d\n", num, index);
    }
    return 0;
}
void input(int a[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
void display(int a[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int check(int a[100], int n, int num)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            return i;
        }
    }
    return -1;
}

