//WAP that prompts th user to enter n numbers from the keyboard, find the sum of all even numbers and display the sum.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", ptr + i);
    }
    for (i = 0; i < n; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            sum += *(ptr + i);
        }
    }
    printf("The sum of all even numbers is: %d", sum);
    free(ptr);
    return 0;
}