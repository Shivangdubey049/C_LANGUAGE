//Write a c program to check whether the entered is leap year or not

#include<stdio.h>
void main(){
    int year;
    printf("Enter the year you want to check : ");
    scanf("%d",&year);
    if ((year%4==0 && year%100!=0) || year % 400 ==0) 
    printf("Given year is leap year");
    else
    printf("The year is not a leap year");
}