//CODED BY SHIVANG :)


#include<stdio.h>

//Funcn prototype writing this is optional
int sum(int,int);         //Initialisation that 2 int value will be inputed and get evaluated

//Funcn definition
int sum(int x,int y){      //Declaration of the two variables
    printf("The sum of given two numbers is : %d",x+y);
    return x+y;             //The final output of the fucntion is written after writing return
    
}

//Normal execution by calling this time

int main(){
    int a=3,b=4;
    sum(a,b);
    return 0;
}