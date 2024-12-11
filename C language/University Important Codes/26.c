//Wacp to print fibonacci series upto n number given by user

#include<stdio.h>
void main(){
    int n,first = 0 , second = 1,s;
    printf("Enter the number upto which you want fibonacci series : ");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
        printf("%d ",first);
        s = first + second;
        first = second;
        second = s;

    }
}