//CODED BY SHIVANG :)


#include<stdio.h>
void main(){
    char i ='A';                              //Declaration and initialisation
    char *j = &i;

    float k = 5.34534;
    float *k1 = &k;

    printf("The address of i is %p\n",&i);  //&i gives the address of the variable stored in ram gives the adress in integer
    printf("The address of i is %p\n",j);  //&i gives the address of the variable stored in ram ,is as same as %u
    printf("The address of k is %p\n",&k);  //&i gives the address of the variable stored in ram ,is as same as %u

}