#include<stdio.h>
#include<stdlib.h>
int main()

{
    int *ptr, i, n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    ptr = (int*) calloc (n, sizeof(int));
    if(ptr == NULL)
    {
        return 0;
    }
    for (i = 0; i<n; i++)
    {
        printf("enter telement %d:", i+1);
        scanf("%d", ptr+i);
    }
    printf("the elements of the array are:");|
    for(i = 0; i<n; i++)
    {
        printf("%d\n", *(ptr+i));
    }
    free(ptr);
    return 0;
}