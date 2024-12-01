//Using typedef for a structure defining

#include<stdio.h>
#include<string.h>

typedef struct employee{           //here we use  typedef which will be of type structure containing employee and end after} i declared typedef in emp
    char name[20];
    int id;
    float salary; 
}emp;                              //declared typedef in emp
int main(){
    emp e1;                        //Now we will used the defined data
    emp *ptr1;                     //making a variable to store address of emp, it has no role in type def
    ptr1 = &e1;                    //storing the address of ptr1 it has no role in typedef
    strcpy(e1.name,"Shivang");
    e1.id = 101;
    e1.salary = 69876.5845;

    printf("Name : %s , ID : %d , Salary : %f\n",e1.name, e1.id,e1.salary);
    printf("%p\n", ptr1);   //Gives the address of e1
    printf("%p", *ptr1);   //Gives the value at address of e1

return 0;
}