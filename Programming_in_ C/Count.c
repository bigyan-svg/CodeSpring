/*WAP to calculate and display the sum of digit entered by the user successively until the sum reduces to a single 
digit number using while loop and assing the single digit sum to a variable R and check whether the variable is prime or composite usign 
goto statement After that do the following:
1. if variable R is neither prime nor composite find and display the rth term of fibonacci series
2. if variable R is composite  find and display the (R-1) th term of the fibonacci series 
3. if variable R is prime find and display the (R+1) th term of the fibonacci series
*/
#include <stdio.h>
#include <math.h>
int main() {
    int num, sum = 0, r, i, j, f1 = 0, f2 = 1, f3;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0 || sum > 9) {
        if (num == 0) {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }
    r = sum;
    if (r == 1) {
        printf("1 is neither prime nor composite\n");
        i = 0;
        j = 1;
        printf("Fibonacci series: ");
        printf("%d %d ", i, j);
        for (int k = 2; k < r; k++) {
            f3 = i + j;
            printf("%d ", f3);
            i = j;
            j = f3;
        }
        printf("\n");
    } else {
        for (i = 2; i <= r / 2; i++) {
            if (r % i == 0) {
                printf("%d is composite\n", r);
                f1 = 0;
                f2 = 1;
                printf("Fibonacci series: ");
                printf("%d %d ", f1, f2);
                for (int k = 2; k < r - 1; k++) {
                    f3 = f1 + f2;
                    printf("%d ", f3);
                    f1 = f2;
                    f2 = f3;
                }
                printf("\n");
                goto end;
            }
        }
        printf("%d is prime\n", r);
        f1 = 0;
        f2 = 1;
        printf("Fibonacci series: ");
        printf("%d %d ", f1, f2);
        for (int k = 2; k < r + 1; k++) {
            f3 = f1 + f2;
            printf("%d ", f3);
            f1 = f2;
            f2 = f3;
        }
        printf("\n");
    }
    end:
    return 0;
}