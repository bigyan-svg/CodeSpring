//wap to ckeck whether a number is present in an array or not using DMA and if present then display its position
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr, num, flag = 0;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", ptr+i);
    }
    printf("the array elements are: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", *(ptr+i));
    }
    printf("\nEnter the number to be searched: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (num == *(ptr+i))
        {
            printf("The number %d is present at index   %d", num, i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The number %d is not present in the array", num);
    }


} 