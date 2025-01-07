//WAP to check whether a number is strong or not
#include<stdio.h>
int main()
{
    int i, n,sum=0,rem,fact,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        i=1, fact=1 ;
        rem=n%10;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The number is strong");
    }
    else
    {
        printf("The number is not strong");
    }
}