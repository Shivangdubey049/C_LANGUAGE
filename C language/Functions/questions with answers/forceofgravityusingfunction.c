//CODED BY SHIVANG :)


#include<stdio.h>
float fog(float m){     //Declaring function of float named fog which stands for force of gravity
    float g = 9.8;      //Initializing g as 9.8 as it is acceleration due to gravity
    float f = m*g;      //Declaration of f and here store force due to gravity
    return f;           //Returning the stored value of f
}

void main(){
    float m;
    printf("ENter the mass of body");
    scanf("%f",&m);
    printf("The force of gravitation will be %0.2f",fog(m)); //Here fog will be calc for arguement of m variable
}
