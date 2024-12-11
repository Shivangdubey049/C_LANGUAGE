//Wacp to calculate the area adn circumference of a circle

#include<stdio.h>
void main(){
    int r;
    float c,a;
    printf("enter the radius : ");
    scanf("%d",&r);
    c = 2*3.14*r;
    a = 3.14*r*r;
    printf("The calculated area is %0.2f and circumference is %0.2f",a,c);
}