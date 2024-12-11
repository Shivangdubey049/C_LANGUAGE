//Write a program to take principal amt , rate , time from user anf calc simple interest

#include<stdio.h>
void main(){
    float p,r,t,si;
    printf("Enter the Principal amount");
    scanf("%f",&p);
    printf("Enter the rate");
    scanf("%f",&r);
    printf("Enter the time");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("The calculated si is %0.2f",si);


}