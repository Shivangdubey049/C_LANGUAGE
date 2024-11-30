//CODED BY SHIVANG :)

//Wacp to count the number of positive integers inside an array without using function

#include<stdio.h>
int pos (int arr[], int size){
    
}
int main(){
int size, count = 0;
printf("Enter the siuze of the array you want : ");
scanf("%d",&size);
int arr[size];
printf("Enter the elements of array\n");
for (int i=0;i<size;i++){
    scanf("%d", &arr[i]);
    if (arr[i]>0)
    count++;
}
printf("The number of positive values in array is %d", count);
return 0;
}
