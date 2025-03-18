#include <stdio.h>
#include <math.h>

int main()
{
    int num, orgnum, rem, sum = 0, n = 0;
    printf("Enter the number: ");
    scanf("%d", &orgnum);
    num = orgnum;
    while (num != 0)
    {
        num = num / 10;
        ++n;
    }
    num = orgnum;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + pow(rem, n);
        num = num / 10;
    }
    if (sum == orgnum)
        printf("Given number is an Armstrong number\n");
    else
        printf("Given number is not an Armstrong number\n");
    getchar(); // Replaces getch()
    return 0;
}