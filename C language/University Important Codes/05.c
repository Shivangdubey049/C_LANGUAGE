//Swapping the number without using third variable

#include<stdio.h>
void main(){
int a,b;
printf("Enter two numbers you want to swap : ");
scanf("%d%d",&a,&b);
printf("Before swapping the two numbers are %d and %d",a,b);
a = a+b;
b = a-b;
a = a-b;
printf("\nAfter swapping the two numbers are %d and %d",a,b);
}