//Write a c program to convert the total days into year, month and day
#include<stdio.h>
int main()
{
    int days, year, month, day;
    printf("Enter the total days: ");
    scanf("%d", &days);
    year = days / 365;
    month = (days % 365) / 30;
    day = (days % 365) % 30;
    printf("%d year, %d month, %d days",year,month,day);
    return 0;
}

