// WAP to input and display a matrix of order m x n in c and also calculate the 
//sum of odd and even elemtnts of the matrix without using function
#include <stdio.h>
int main() {
    int a[100][100], m, n, sum_odd = 0, sum_even = 0, i, j;     
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            printf ("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0) {
                sum_even += a[i][j];
            } else {
                sum_odd += a[i][j];
            }
        }
    }
    printf("The sum of odd elements is: %d\n", sum_odd);
    printf("The sum of even elements is: %d\n", sum_even);
    return 0;
}
