// Tiitle: Basic Input and Output in C
// OBJECTIVE: TO UNDESTAND AND PERFORM BASIC INPUT AND OUTPUt IN C
 // Write a program  to perform addition subtraction multiplication and division of two numbers.
//  #include <stdio.h>
//  int main()
//  {
//     int a,b, sum , diff, prod, divi;
//     printf("Enter the first number: ");
//     scanf("%d",&a);
//     printf("Enter the second number: ");
//     scanf("%d",&b);
//     sum = a + b;
//     diff = a - b;
//     prod = a * b;
//     divi = a / b;
//     printf("%d + %d = %d\n",a,b,sum);
//     printf("%d - %d = %d\n",a,b,diff);
//     printf("%d * %d = %d\n",a,b,prod);
//     printf("%d / %d = %d\n",a,b,divi);
//     return 0;
//  }

 // Write a program to calculate the Simple Interest using the formula: SI = (P * R * T) / 100
//  #include <stdio.h>
//  int main()
//  {
//     float principal, rate, time, interest;
//     printf("Enter the principal amount: ");
//     scanf("%f",&principal);
//     printf("Enter the rate of interest: ");
//     scanf("%f",&rate);
//     printf("Enter the time period: ");
//     scanf("%f",&time);
//     interest = (principal * rate * time) / 100;
//     printf("Simple Interest = %.2f\n",interest);
//     return 0;
//  }

// Write a program to calculate the area and perimeter of a rectangle using the formula: 
// Area = length * width and Perimeter = 2 * (length + width)
// #include <stdio.h>
// int main()
// {
//     int length, width, area, perimeter;
//     printf("Enter the length of the rectangle: ");
//     scanf("%d",&length);
//     printf("Enter the width of the rectangle: ");
//     scanf("%d",&width);
//     area = length * width;
//     perimeter = 2 * (length + width);
//     printf("Area of the rectangle = %d\n",area);
//     printf("Perimeter of the rectangle = %d\n",perimeter);
//     return 0;
// }

// Write a propgram to find the roots of a quadratic equation using the formula :
// roots = (-b ± sqrt(b^2 - 4ac)) / 2a
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, root_1, root_2;
    printf("Enter the value of coefficients a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    root_1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    root_2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    printf("Roots of the equation are: %d and %d\n",root_1, root_2);
    return 0;
}