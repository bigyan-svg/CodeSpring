#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int *ptr, i, n, max, min;
    printf("enter the size of string:");
    scanf("%d",&n);
    ptr = (int*) calloc(n,sizeof(int));
    if (ptr==NULL)
    {
        return 0;
    }
    for (i=0; i<n;i++)
    {
        printf("enter element %d:", i+1);
        scanf("%d", ptr+i);
    }
    printf("ther array elements are:");
    for (i=0;i<n;i++)
    {
        printf(" %d ", *(ptr+i));
    }
    max  = *(ptr+0);
    min = *(ptr+0);
    for(i =0; i<n; i++)
    {
        if(*(ptr+i)>max)
        {
            max = *(ptr+i);
        }
        if(*(ptr+i)<min)
        {
            min = *(ptr+i);
        }
    }
    printf("\n max = %d",max);
    printf(" min = %d\n",min);
    
    free(ptr);
    return 0;
}