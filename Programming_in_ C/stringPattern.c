//WAP to print the following pattern in c
// C
// CO
// COM
// COMP
// COMPU
// COMPUT
// COMPUTE
#include <stdio.h>
int main()
{
    char str[50];
    int i, j;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] !='\0'; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}