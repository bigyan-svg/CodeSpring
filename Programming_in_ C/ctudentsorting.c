//WAP to input , display and sort n students name in ascending order using function and function prototype
#include <stdio.h>
#include <string.h>
void input(char name[100][100], int n);
void display(char name[100][100], int n);
void sort(char name[100][100], int n);
int main()
{
    int n;
    char name[100][100];
    printf("Enter the number of students: ");
    scanf("%d", &n);
    input(name, n);
    printf("\nThe student names are: ");
    display(name, n);
    sort(name, n);
    printf("\nThe sorted student names are: ");
    display(name, n);
    return 0;
}
void input(char name[100][100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter name of student[%d]: ", i);
        gets(name[i]);
    }
}
void display(char name[100][100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s ", name[i]);
    }
}
void sort(char name[100][100], int n)
{
    int i, j;
    char temp[100];
    for (i = 0; i < n; i++)
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
}
//output
// Enter the number of students: 3 
// Enter name of student[0]: Bigyan
// Enter name of student[1]: Prashant
// Enter name of student[2]: Prajjwal
// The student names are: Bigyan Prashant Prajjwal
// The sorted student names are: Bigyan Prajjwal Prashant