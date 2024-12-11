//Write a program to print largest amoung 3 numbers using nested if else

#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter the third number : ");
    scanf("%d",&c);
    if (a>b){
        if(a>c)
        printf("%d is the greatest",a);
        else
        printf("%d is the greatest",c);
    }
    if (b>c){
        if(b>a)
        printf("%d is the greatest",b);
        else
        printf("%d is the greatest",a);
    }
    if (c>a){
        if(c>b)
        printf("%d is the greatest",c);
        else
        printf("%d is the greatest",b);
    }
}