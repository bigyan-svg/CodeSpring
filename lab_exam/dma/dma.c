#include<stdio.h>
int main(){
int a[100], size, i, max, min;
printf("Enter the size of array:");
scanf("%d",&size);
//input array
for(i=0;i<size;i++){
printf("Enter a[%d] element:",i);
scanf("%d",&a[i]);
}
//output array at even index
printf("The array elements are:\n");
for(i=0;i<size;i++){
printf("\n%d\n",a[i]);
}
max = a[0];
min = a[0];
for(i=1;i<size;i++){
    if(a[i]>max){
        max = a[i];
    }
    if(a[i]<min){
        min = a[i];
    }
}
printf("The maximum element in an array is %d\n",max);
printf("The minimum element in an array is %d\n",min);
return 0;
}