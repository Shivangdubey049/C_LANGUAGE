#include<stdio.h>
#include<string.h>
struct employee{               //Declaring the variable that we will further use in the program
    char name[20];
    int id;
    float salary;
    };

void main(){
    struct employee shivang[100];                           //struct employee shivang[100]; declares an array of structures
    shivang[0].salary = 200000;                             //Assigning the values as we used to do in arrays 
    shivang[1].salary = 340000;
    shivang[0].id = 345;
    strcpy(shivang[0].name,"Shivang Dubey");                //For assigning a string to initialised char 

    struct employee jeff = {"Jeff Bezos", 1011 , 120000.50}; 
//We can store data in this manner also just remember the way u declared the vaariables as the values are stored respectively to the declared variables

    printf("%s %f %d\n", shivang[0].name,shivang[0].salary,shivang[0].id);
    printf("%s %f %d\n", jeff.name,jeff.salary,jeff.id);
    
}