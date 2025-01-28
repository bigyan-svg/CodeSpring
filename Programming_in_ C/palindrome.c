//WAP to check whether a given string is palindrome or not without using any string handling functions
// convert the string to lower case  without using functions checking for palindrome
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, len = 0, flag = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else
        {
            str[i] = str[i];
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
        printf("%s is not a palindrome\n", str);
    }
    else
    {
        printf("%s is a palindrome\n", str);
    }
    return 0;
}