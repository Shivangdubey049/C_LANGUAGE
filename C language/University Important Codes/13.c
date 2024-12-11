//Wacp to make a simple calculator using if else ladder

#include<stdio.h>
void main(){
    char ch;
    int n1,n2;
    printf("Enter the 1st number : ");
    scanf("%d",&n1);
    printf("Enter the 2nd number : ");
    scanf("%d",&n2);
    fflush(stdin);                  //To clear the input buffer
    printf("Enter the operand you want to use : ");
    scanf("%c",&ch);    
    if(ch == '+')
    printf("Addition is %d",n1+n2);
    else if(ch == '-')
    printf("Substraction is %d",n1-n2);
    else if(ch == '*')
    printf("Multiplication is %d",n1*n2);
    else if(ch == '%')
    printf("Remainder is %d",n1%n2);
    else if(ch == '/')
    printf("Division is %d",n1/n2);
    else
    printf("Enter a valid operator");

}