//CODED BY SHIVANG :)


//Now we will change the values of assigned variable in the main function
#include<stdio.h>
int sum(int*a,int*b){     //Making two variables named as *a and *b which will now store data of x and y
    *a = 69;              //By doing this the value of the data at the address will be changed
    return *a+*b;                                             //Return the sum of a and b after the calling
}

/*We cannot change the data by just passing the value and exchanging it ,
we have to change the values from the root i.e address */

void main(){
    int x=5;
    int y=6;                                                            
    printf("The sum of a and b is %d\n", sum(&x,&y));   /*sending the address of x and y to a and b so that the 
    value of x and y can be changed*/
    printf("The value of x is %d",x);     //69 will be printed as the values is now changed by pointer type        
}                                              
    