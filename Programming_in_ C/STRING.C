//WAP TO PRINT THE FOLLOWING PATTERN IN C
// ENGINEER
// ENGINEE
// ENGINE
// ENGIN
// ENGI
// ENG
// EN
// E
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i, j, len = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len - i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}
 