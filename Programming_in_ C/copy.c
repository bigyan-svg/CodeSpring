//WAP TO COPY ONE 1D ARRAY TO ANOTHER USING DMA IN REVERSE ORDER
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr1, *ptr2;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    ptr1 = (int *)calloc(n, sizeof(int));
    ptr2 = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", ptr1 + i);
    }
    printf("the array elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr1 + i));
    }
    for (i = 0; i < n; i++)
    {
        *(ptr2 + i) = *(ptr1 + n - i - 1);
    }
    printf("\nThe copied array elements in reverse order are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr2 + i));
    }
    free(ptr1);
    free(ptr2);
    return 0;
}    