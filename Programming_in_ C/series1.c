//wap to print the following series
// cos (x) = 1 - x^2/2! + x^4/4! - x^6!.........upto n terms
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, sign = 1;
    float x, sum = 0, nume, deno, val, term;
    printf("Enter the value of x in degree: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    val = x * (3.14159 / 180);
    nume = 1;
    deno = 1;
    sum = 1;
    for (i = 2; i <= n; i++)
    {
        nume = nume * val * val;
        deno = deno * (i * 2 -3)* (i*2-2);
        sign = sign * (-1);
        term = nume / deno*sign ;
        sum = sum + term;
    }
    printf("\ncos(%f) is = %f",val, sum);
    return 0;
}