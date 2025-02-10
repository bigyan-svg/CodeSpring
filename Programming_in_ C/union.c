//Write a simple program to demonstrate the use of union in C.
#include <stdio.h>
union student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    union student s;
    printf("Enter the name: ");
    scanf ("%s", s.name);
    printf("Enter the roll number: ");
    scanf("%d", &s.roll);
    printf("Enter the marks: ");
    scanf("%f", &s.marks);
    printf("The details of the student are: \n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %f\n", s.marks);
    return 0;
}
