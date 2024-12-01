//Typedef is used to make datatype of our own 

#include<stdio.h>

int main(){
    typedef float decimal;    //We made a datatype of name dacimal which will store float type value for future usage
    decimal salary = 45000.47373;
    printf("The salary is %f", salary);
     
return 0;
}