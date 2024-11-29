//CODED BY SHIVANG :)


//A pointer is a variable which stores data of another variable
#include<stdio.h>
void main(){
    int i =73;                              //Declaration and initialisation
    printf("The address of i is %p\n",&i);  //&i gives the address of the variable stored in ram &p gives adress in hexagonal decimal form
    printf("The address of i is %u\n",&i);  //&i gives the address of the variable stored in ram gives the adress in integer
    printf("The address of i is %d\n",&i);  //&i gives the address of the variable stored in ram ,is as same as %u

    //USALLY WE USE %p ONLY TO GET THE ADRESS OF THE VARIABLE
    //By %p we get hexadecimal adresses
    //To store the address of the variable we use following syntax

    int *j=&i;                               //The address of the variable is stored in the variable

    printf("The address of i stored in j is %d\n",j);  //&i gives the address of the variable stored in ram is as same as %u
    printf("The value at address j is %d\n",*j);         //It gives the value which is stored at the address
    printf("The value at address j is %d\n",*(&i));      //It gives the value which is stored at the address

    // * is used to get the value stored at an address
    // & is used to get the address where value is stored

}