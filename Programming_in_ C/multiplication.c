//WAP to input, display and multiply two matrix using function in c
#include <stdio.h>
void input (int a[100][100], int m, int n);
void display (int a[100][100], int m, int n);
void multiply (int a[100][100], int b[100][100], int c[100][100], int m, int n, int z);
int main() {
    int a[100][100], b[100][100], c[100][100], m1, n1, m2, n2, z;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &m1, &n1);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d", &m2, &n2);
    printf("Enter the first matrix:\n");
    input(a, m1, n1);
    printf("Enter the second matrix:\n");
    input(b, m2, n2);
    printf("The first matrix is:\n");
    display(a, m1, n1);
    printf("The second matrix is:\n");
    display(b, m2, n2);
    multiply(a, b, c, m, n, z);
    printf("The product of the matrices is:\n");
    display(c, m1, n2);
    return 0
}
void input (int a[100][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf ("Enter the element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void display (int a[100][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void multiply (int a[100][100], int b[100][100], int c[100][100], int m, int n, int z) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < z; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
