//CODED BY SHIVANG :)


#include<stdio.h>

int main(){
int marks[] = {56,34,54,76};

int *ptr = &marks[0];
int *ptr1 = marks;
//Both of the above are same and correct and produce exact same output  

for(int i = 0;i<4;i++){
    printf("The index is %d and corresponding value is %d\n",i,marks[i]); //Printing normally by value
    printf("The index is %d and corresponding value is %d\n",i,*ptr); //Printing normally by value
    ptr++;
}
return 0;
}