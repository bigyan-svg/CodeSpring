//WAP to input and display n student name
#include <stdio.h>
int main()
{
    char name[100][100];
    int i, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        gets(name[i]);
    }
    printf("\nThe names of the students are: ");
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d: %s", i + 1, name[i]);
    }
    return 0;
}