

// Write a menu driven program to perform the following operations
// 1. Maximum of two numbers
// 2. Factorial of a number
// 3. Check odd or even
// 4. Exit
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice,num1,num2,fact=1,i;
    while(1)
    {
        printf("1. Maximum of two numbers\n");
        printf("2. Factorial of a number\n");
        printf("3. Check odd or even\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d%d",&num1,&num2);
                if(num1>num2)
                    printf("%d is maximum\n",num1);
                else
                    printf("%d is maximum\n",num2);
                break;
            case 2: //factorial of a number
                printf("Enter a number: ");
                scanf("%d",&num1);
                for(i=1;i<=num1;i++)
                {
                    fact=fact*i;
                }
                printf("Factorial of %d is %d\n",num1,fact);
                break;
            case 3: //check odd or even
                printf("Enter a number: ");
                scanf("%d",&num1);
                if(num1%2==0)
                    printf("%d is even\n",num1);
                else
                    printf("%d is odd\n",num1);
                break;
            case 4:exit(0);
            default:
                printf("Invalid choice\n");
                break; 
        }

    }
}
