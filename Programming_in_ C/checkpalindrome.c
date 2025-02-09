//WAP to chck whether the given string is palindrome or not using function and function prototype
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void input(char str[100]);
void check(char str[100]);
int main()
{
    char str[100];
    input(str);
    check(str);
    return 0;
}
void input(char str[100])
{
    printf("Enter a string: ");
    scanf("%s", str);
}
void check(char str[100])
{
    int i, len = 0, flag = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    for (i = 0; i < len; i++)
    {
        if (str[i]>= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("not a palindrome\n");
    }
    else
    {
        printf("palindrome\n");
    }
}
//output
// Enter a string: Madam
// palindrome