//CODED BY SHIVANG :)


//Now we will change the values of assigned variable in the main function
#include<stdio.h>
int sum(int a,int b){                                        //Making two variables named as a and b
    a = 69;  // Value of x will still remain x now open the code of call by refernce 2 to know how to chng
    return a+b;                                             //Return the sum of a and b after the calling
}
/*Here we know that the copy of x and y are send to a and b variable of the function even if we do print the 
value of x it will show the value assigned which is 6, changing the value becomes bit of tricky but
dont worry we can do it by using pointers you must read the pointers chapter basic for it first go and read now!*/

void main(){
    int x=5;
    int y=6;                                                            
    printf("The sum of a and b is %d\n", sum(x,y));    //Values 5 and 6 are passed in the function then sum will
                                                       //be returned as output i.e. a+b
    printf("The value of x is %d",x);         
}                                              
    