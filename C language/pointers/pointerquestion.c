//CODED BY SHIVANG :)


//Program to multiply the the passed value to function and multiply the value by 10

#include<stdio.h>
void times10(int *a){
   *a =  *a * 10;
}

void main(){
    int num = 3;
    int *a = &num;
    printf("The value initially is %d\n",num);
    times10(a);
    printf("The value of a now is %d",*a);

}