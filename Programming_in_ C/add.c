//WAP to add two matrix using function in c
#include <stdio.h>
void input (int a[100][100], int m, int n);
void display (int a[100][100], int m, int n);
void add (int a[100][100], int b[100][100], int c[100][100], int m, int n);
int main() {
    int a[100][100], b[100][100], c[100][100], m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter the first matrix:\n");
    input(a, m, n);
    printf("Enter the second matrix:\n");
    input(b, m, n);
    add(a, b, c, m, n);
    printf("The sum of the matrices is:\n");
    display(c, m, n);
    return 0;
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
void add (int a[100][100], int b[100][100], int c[100][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}