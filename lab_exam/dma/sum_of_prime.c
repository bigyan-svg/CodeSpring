#include<stdio.h>
#include<stdlib.h>
int main()

{
    int *ptr, i, n,sum= 0, count,j;
    printf("enter the size of an array:");
    scanf("%d",&n);
    ptr = (int*) calloc (n, sizeof(int));
    if(ptr == NULL)
    {
        return 0;
    }
    for (i = 0; i<n; i++)
    {
        printf("enter element %d:", i+1);
        scanf("%d", ptr+i);
    }
    printf("the elements of the array are:");
    for(i = 0; i<n; i++)
    {
        printf("%d\n", *(ptr+i));
    }
    for(i = 0; i<n; i++)
    {
        count = 0;
        for (j=1; j<= *(ptr+i); j++)
        {
        if(*(ptr+i)%j == 0)
        {
            count++;
        }
        }
        if(count == 2)
        {
            sum += *(ptr+i);
        }
    }
    printf("sum of prime = %d\n", sum);
    free(ptr);
    return 0;
}