//CODED BY SHIVANG :)

//Create an array of size 3 X 10 containing multiplication table of number 2 7 and 10 respectively

#include <stdio.h>

void main() {
    int arr[3][10];
    int num[3]={2,7,10};
    for (int i = 0;i<3;i++){
        for(int j = 0;j<10;j++){
            arr[i][j] = num[i] * (j+1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 10; j++)
       {
            printf("%d X %d = %d\n",num[i], j+1,arr[i][j]);
       }
       
    }
    
}