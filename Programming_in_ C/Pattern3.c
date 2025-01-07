//WAP to print the following pattern
//*****
// ****
//  ***
//   **
//    *
#include<stdio.h>
int main()
{
    int i,j,k,row;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(j=row;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
