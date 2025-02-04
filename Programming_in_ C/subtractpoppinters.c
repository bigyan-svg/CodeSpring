//wap to subtract two pointers
#include <stdio.h>
int main()
{
    int *ptr1, *ptr2, sub = 0;
    int a[5] = {1, 2, 3, 4, 5};
    ptr1 = &a[0];
    ptr2 = &a[4];
    printf("Initial pointer address: %p\n",ptr1);

    printf("Initial pointer address: %p\n", ptr2);
    sub = ptr2 - ptr1;
    printf("Subtraction of two pointers: %d\n", sub);
    return 0;
}