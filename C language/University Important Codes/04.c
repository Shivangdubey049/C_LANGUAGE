//Swapping of two numbers

#include<stdio.h>
void main(){
    int a , b , c;
    printf("Enter the two numbers you want to swap : ");
    scanf("%d%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("The swap of the given numbers is %d and %d",a,b);
}