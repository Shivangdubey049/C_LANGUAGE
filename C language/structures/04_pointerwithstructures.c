#include<stdio.h>
struct employee {                       //Declaring a structure named employee
    char name[20];                      //Assigning the required variables that we will further use
    float salary;
    int id;
};

int main(){
    struct employee e1;                //e1 is a variable of type struct employee.
    e1.id = 101011;
    struct employee *ptr;              //ptr is a pointer to a struct employee.
    ptr = &e1;
    printf("The address is %p",ptr);
    printf("The id is %d\n",(*ptr).id);

///////////////////////////////////////////ARROW OPERATOR//////////////////////////////////////////////////////////
    printf("The id is %d\n",ptr->id);  //Instead of doing *(ptr).id we can just use arrow operator and it will produce the same output


return 0;
}