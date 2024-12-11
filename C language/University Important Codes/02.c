//Celsius to fahrenheit

#include<stdio.h>

int main(){
float c,f;
printf("Enter the temperature in celsius");
scanf("%f",&c);
f = (c * 9 / 5) + 32;
printf("\nThe temperature in fahrenheit is %0.2f",f);
return 0;
}