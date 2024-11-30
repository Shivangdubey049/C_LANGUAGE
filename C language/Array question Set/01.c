//CODED BY SHIVANG :)

//Create an aray of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the 3rd element where ptr is a pointer
//pointing to the 3rd element

#include<stdio.h>

int main(){
int arr[10];
printf("Below enter the array data\n");
for (int i = 0;i<10;i++)
{
    scanf("%d",&arr[i]);
}
int *ptr = &arr[0];
printf("\n");
printf("The data stored at 0 index is %d\n",*ptr);
ptr+=2;
printf("The data after doing ptr+2 address is %d",*ptr);

return 0;
}