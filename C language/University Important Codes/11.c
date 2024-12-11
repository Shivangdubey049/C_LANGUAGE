//Wacp to check the entered number is even or odd

#include<stdio.h>
void main(){
    int num;
    printf("Enter a number you want to : ");
    scanf("%d",&num);
    if (num%2==0)
    printf("The number is even");
    else if (num%2!=0)
    printf("The number is odd");
}