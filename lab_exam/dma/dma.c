#include<stdio.h>
int main(){
int a[100], size, i;
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
if(i%2==0){
printf("\n%d\n",a[i]);
}
}
return 0;
}