//Wacp to find sum of all numbers upto a given number

#include<stdio.h>
void main(){
    int n ,sum = 0;
    printf("Enter the number upto which you want sum : ");
    scanf("%d",&n);
    for (int i = 0;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum upto given numbers is %d",sum);
}