//Wacp to design calculator using switch case

#include<stdio.h>
void main(){
    char ch;
    int a,b;
    printf("Enter the first number : ");
    scanf(" %d",&a);
    printf("Enter the second number : ");
    scanf(" %d",&b);
    fflush(stdin);
    printf("Enter the operator : ");
    scanf("%c",&ch);
    switch(ch){
    case'+':printf("Addition is %d",a+b);
    break;
    case'-':printf("Substraction is %d",a-b);
    break;
    case'*':printf("Multiplication is %d",a*b);
    break;
    case'/':printf("Division is %d",a/b);
    break;
    case'%':printf("Remainder is %d",a%b);
    break;
    default:printf("Enter a  valid operator");
    }
}
        
    