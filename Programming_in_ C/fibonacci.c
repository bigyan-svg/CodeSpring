//wap to find the fibonacci series upto n terms
#include <stdio.h>
int main()
{
    int n, i, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The fibonacci series upto %d terms is: ", n);
    printf("\n%d\t%d\t", a, b);
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }
    return 0;
}