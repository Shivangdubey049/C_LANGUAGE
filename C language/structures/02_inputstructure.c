//Taking input in a structure 

#include<stdio.h>
#include<string.h>

struct employee{           //Employee is initialised as structure
char name[10];
int id ;
float salary;
};

void main(){
    struct employee e1;
        
    printf("Enter the name of the employee");
    scanf("%s",&e1.name);        //Taking the input of name and storing in e1.name
    printf("Enter the id of the employee");
    scanf("%d",&e1.id);         //Taking the input of id and storing in e1.id
    printf("Enter the salary of the employee");
    scanf("%f",&e1.salary);    //Taking the input of salary and storing in e1.salary

printf("Name : %s, ID : %d, Salary : %0.2f",e1.name,e1.id,e1.salary);
}
