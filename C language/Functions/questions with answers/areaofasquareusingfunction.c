//CODED BY SHIVANG :)


#include<stdio.h>
#include<math.h>
double area(int b){                         //took double type function to maintain precision in decimal values
    double result = pow(b,2);              //pow(b,2) means b to the square or u can say b^2
    printf("The area of the square is %f: ",result);  //printing the resuklt
    return result;              //rerturning the result vacriable as final output from the function
}
#include<stdio.h>

int main(){
int c=2;
area(c);             //Copy of c will be stored in b evaluation will be done accordingly
return 0;
}