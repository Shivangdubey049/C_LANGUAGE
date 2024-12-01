#include<stdio.h>
#include<string.h>

//Format for declaring a structure

struct student{
    //The data you want is initialized here
    char name[10];   //Initializes name variable as character
    int rn;          //Initializes rn variable as integer
    float marks;     //Initializes marls variable as flaoata
};

int main(){
    struct student s1;             //Making s1 of structure type under student
    s1.marks = 99.5;               //Assigning marks to s1.marks
    s1.rn = 101;                   //Assigning rn to s1.rn
    strcpy(s1.name,"Shivang");     //Assigning name to s1.name... Assigning of character is done in this way only!!!!

printf("Name is %s, Rn is %d, Marks is %0.2f ", s1.name,s1.rn ,s1.marks);         // Prints the assigned values respectively

return 0;

}