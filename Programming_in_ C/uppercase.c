//WAP to conver the given strong into uppercase using function and function prototype
#include <stdio.h>
void input(char str[100]);
void convert(char str[100]);
int main()
{
    char str[100];
    input(str);
    convert(str);
    return 0;
}
void input(char str[100])
{
    printf("Enter a string: ");
    gets(str);
}
void convert(char str[100])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    
    printf("The uppercase string is: %s", str);
}
//output
// Enter a string: CodeSpring
// The uppercase string is: CODESPRING