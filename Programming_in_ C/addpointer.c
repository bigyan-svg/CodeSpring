// WAP to show the subtraction of pointer with a number
#include <stdio.h>

int main()
{
    int *ptr;
    int a[5] = {1, 2, 3, 4, 5};
    ptr = &a[4];

    // Print the address and value at the initial pointer position
    printf("Initial pointer address: %p\n", (void*)ptr);
    printf("Value at initial pointer address: %d\n", *ptr);

    // Subtract 2 from the pointer
    ptr = ptr - 2;

    // Print the address and value at the new pointer position
    printf("Pointer address after subtraction: %p\n", (void*)ptr);
    printf("Value at new pointer address: %d\n", *ptr);

    return 0;
}