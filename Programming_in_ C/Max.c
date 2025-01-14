#include <stdio.h>
int main()
{
    int i, n, a[100], max;
    printf("Enter total number of elements: ");
    scanf("%d", &n);
    printf("\n");
    // Store number entered by the user
    for (i = 0; i < n; ++i)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }
     for (i = 0; i < n; ++i)
    {
        printf("\n a[%d] = %d : ", i, a[i]);
    }
    max = a[0];

    // Loop to store largest number to a[0]
    for (i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max =a[i];
        }
    }
    printf("Largest element = %d", a[i]);
    return 0;
}