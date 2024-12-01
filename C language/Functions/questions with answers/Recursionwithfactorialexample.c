//CODED BY SHIVANG :)


#include<stdio.h>                 //importing library
int fact(int n){                 //Making a function named as fact which contain factorial calculating code
    if(n==1 ||n==0)             //Factorial of 1 and 0 is 1 therefore well return the value of 1
    return 1;
    else if(n>1)                //Calculation of factorial when n is bigger than 1 we"ll calc factorial
    return fact(n-1)*n;//We know 5! will be equal to 4! X 5 and 4! will be 3! X 4 and so on hence we write this particular code
}

void main(){       //Function will be called here
    int a;         // a will be stored in n then will be calculated
    printf("Enter the number you want factorial of : ");
    scanf("%d",&a);
    printf("The factorial of the given number is %d", fact(a)); //Calling the function for variable a
}
