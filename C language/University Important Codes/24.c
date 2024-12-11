//Wacp to check the number is prime or not

#include<stdio.h>
void main(){
    int n,count1=0;
    printf("Enter the number you want to check is prime or not : ");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
        if(n%i==0)
        count1++;
    }
        if (count1==2)
        printf("The number is a prime number");
        else
        printf("The number is not a prime number");

    }
