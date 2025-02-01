//WAP to count the no of alphabets, diits and symbols or special characters in a string using function and function prototype
#include <stdio.h>
void input(char str[100]);
void count(char str[100]);
int main()
{
    char str[100];
    input(str);
    count(str);
    return 0;
}
void input(char str[100])
{
    printf("Enter a string: ");
    gets(str);
}
void count(char str[100])
{
    int i, alphabets = 0, digits = 0, symbols = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else
        {
            symbols++;
        }
    }
    printf("alphabets = %d digits = %d symbol = %d\n", alphabets, digits, symbols);
}
//output
// Enter a string: CodeSpring@123
// alphabets = 10 digits = 3 symbol = 1