// WAP to sort n students name in ascending arder or alphabetical order
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100][100], temp[100];
    int i, j, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        gets(name[i]);
    }
    printf("\nThe unsorted names of the students are: ");
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d: %s", i + 1, name[i]);
    }
    for (i = 0; i < n ; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("\nThe names of the students in alphabetical order are: ");
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d: %s", i + 1, name[i]);
    }
    return 0;
}