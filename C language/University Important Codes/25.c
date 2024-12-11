//Wacp to print the factorial of a given number

#include<stdio.h>
void main(){
    int n,fact=1;
    printf("Enter the number you want to find factorial of : ");
    scanf("%d",&n);
    for (int i = 1 ; i <= n; i++){
        fact = fact*i;
    }
    printf("The factorial is %d ",fact);
}