//Wacp to print the sum of even numbers and odd numbers

#include<stdio.h>
void main(){
    int sum_e = 0,sum_o = 0,n;
    printf("Enter the number you want sum till : ");
    scanf("%d",&n);
    for (int i =1;i<=n;i++){
        if (i%2==0)
            sum_e = sum_e +i;
        
        else
            sum_o = sum_o +i;
        }
        printf("The sum of even numbers is : %d",sum_e);
        printf("\nThe sum of odd numbers is : %d",sum_o);

    }
