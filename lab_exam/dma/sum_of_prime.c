#include<stdio.h>
int main(){
int a[100], b[100], size1, size2, i, j, temp, flag = 0;
abc:
printf("Enter the size of first array:");
scanf("%d",&size1);
printf("Enter the size of second array:");
scanf("%d",&size2);
if (size1 != size2){
    printf("given array are not equal!\n");
    goto abc;
}

printf("Enter the elements of first array:\n");
for(i=0;i<size1;i++){
    printf("Enter a[%d]: ",i);
    scanf("%d",&a[i]);
}
printf("Enter the elements of second array:\n");
for(i=0;i<size2;i++){
    printf("Enter b[%d]: ",i);
    scanf("%d",&b[i]);
}
printf("the first array is:\n");
for(i=0;i<size1;i++){
    printf("%d\n",a[i]);
}
printf("\n");
printf("the second array is:\n");
for(i=0;i<size2;i++){
    printf("%d\n",b[i]);
}
printf("\n");
for (i=0;i<size1;i++){
    for (j=i+1;j<size1;j++){
        if (a[i]>a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}
for (i=0;i<size2;i++){
    for (j=i+1;j<size2;j++){
        if (b[i]>b[j]){
            temp = b[i];
            b[i] = b[j];
            b[j] = temp;
        }
    }
}
for (i=0;i<size1;i++){
    if (a[i] == b[i]){
        flag = 1;
    }
}
if (flag == 0){
    printf("The given arrays are not equal!\n");
}
else{
    printf("The given arrays are equal!\n");
}
return 0;
}

