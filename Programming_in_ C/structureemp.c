//create a structure employee with the following data fields:
//empid, name , salary, Address, DOB(mm,dd,yy)(use nested structure)
//write a program to input the records of 100 employee and display the record of those employee whose address is "Kathmandu"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct DOB
{
    int mm;
    int dd;
    int yy;
};
struct employee
{
    int empid;
    char name[20];
    float salary;
    char address[20];
    struct DOB d;
};
int main()
{
    struct employee emp[100];
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the employee id: ");
        scanf("%d", &emp[i].empid);
        printf("Enter the name: ");
        fflush(stdin);
        gets(emp[i].name);
        printf("Enter the salary: ");
        scanf("%f", &emp[i].salary);
        printf("Enter the address: ");
        fflush(stdin);
        gets(emp[i].address);
        printf("Enter the date of birth(mm dd yy): ");
        scanf("%d %d %d", &emp[i].d.mm, &emp[i].d.dd, &emp[i].d.yy);
    }
    printf("The records of the employees are: \n");
    for (int i = 0; i < n; i++)
    {
        if (strcmpi(emp[i].address, "Kathmandu")==0)
        {
            printf("Employee id: %d\n", emp[i].empid);
            printf("Name: %s\n", emp[i].name);
            printf("Salary: %.2f\n", emp[i].salary);
            printf("Address: %s\n", emp[i].address);
            printf("Date of birth: %d/%d/%d\n", emp[i].d.mm, emp[i].d.dd, emp[i].d.yy);
        }
    }
    return 0;
}
