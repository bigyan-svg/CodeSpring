#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    //variable declaration
    float num1,num2,result;
    int choice;
    //infinite loop
    while(1)
    {
        //display menu
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        //switch case
        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f%f",&num1,&num2);
                result=num1+num2;
                printf("Result: %f\n",result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f%f",&num1,&num2);
                result=num1-num2;
                printf("Result: %f\n",result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f%f",&num1,&num2);
                result=num1*num2;
                printf("Result: %f\n",result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f%f",&num1,&num2);
                result=num1/num2;
                printf("Result: %f\n",result);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
                break;
        }
    }
}
