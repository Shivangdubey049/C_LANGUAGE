//CODED BY SHIVANG :)


#include<stdio.h>

void swap(int *a, int *b){   //Making the swap function to swap the values
int temp = *a;              /*storing the value of a in temp but by using *a so that the actual value changes for
more explanation refer to the program callbyreference2 code it is explained in details there*/
*a=*b;           //As the value of a is stored in temp now we store value of b in a
*b = temp;       // Storing the value of temp which was initially the value of a to b
}

/*We cannot normally change the value without using pointers i.e. & and * as the copy is send to user defined
function , yepp we can do it by writing the printf statement in the void main funcn that is user defined
but sorry its against my ethics as it is not vwery correct way to write the code ,
NOTE :: when it is asked to do swao by call by reference then write this code, but when asked to do by call by
value do printf in the user defined funcn*/

int main(){
int a,b;
printf("Enter the value you want to swap : ");
scanf("%d%d",&a,&b);
swap(&a, &b);            //Calling the function for the inputted value of a and b 
printf("The swapped values are as follows %d and %d\n",a,b);
return 0;
}