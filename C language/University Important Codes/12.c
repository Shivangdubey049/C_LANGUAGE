//Wacp to check the two numbers entered by the user are equal or not

#include<stdio.h>
void main(){
    int n1,n2;
    printf("Enter the first number : ");
    scanf("%d",&n1);
    printf("Enter the second number : ");
    scanf("%d",&n2);
    if (n1==n2)
    printf("Both the numbers are equal");
    if (n1!=n2)
    printf("Both the numbers are not equal");

}