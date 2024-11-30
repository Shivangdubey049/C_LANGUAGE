//CODED BY SHIVANG :)

/*Write a program to create an array of 10 integers and store multiplication table of 5 in it*/
#include<stdio.h>

int main(){    //0 1 2 3 4 5 6 7 8  9 
int table[10] = {1,2,3,4,5,6,7,8,9,10};
for (int i=0 ; i<10;i++){
    printf("The multiply by %d is %d\n",i+1, table[i]*5);
}
return 0;
}