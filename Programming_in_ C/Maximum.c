// WAP to find the maximum of 10 numbers.
#include <stdio.h>
int main()
{
    int i , a[10], max = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] > max)
            max = a[i];
    }
    printf("Maximum number is: %d\n", max);
    return 0;
}