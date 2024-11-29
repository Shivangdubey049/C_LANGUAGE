//CODED BY SHIVANG :)


#include<stdio.h>
float temp(float c){                 //Making float function named temp which will be used to convert temp
    float a = (9.0/5.0*c)+32;       //FOrmula for conversaion of celsius to Fahrenheit
    return a;                      //Returning the calculated value to a
}

void main(){                    //Function will be called here
    float a;                   // a will be stored in a then will be calculated
    printf("Enter the temperature you want to convert : ");
    scanf("%f",&a);
    printf("The factorial of the given number is %f", temp(a));      //Calling the function for variable a
}