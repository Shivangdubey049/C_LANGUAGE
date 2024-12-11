//Wacp to find largest btwn 2 numbers using ternary operator

#include<stdio.h>
void main(){
    int n1,n2,t;
    printf("Enter the first number : ");
    scanf("%d",&n1);
    printf("Enter the second number : ");
    scanf("%d",&n2);
    t = (n1>n2)?n1:n2;
    printf("Largest number is %d",t);
}