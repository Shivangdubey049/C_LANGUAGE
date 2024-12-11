//Wacp to print the reverse of a number

#include<stdio.h>
void main(){
    int n,j,rev=0;
    printf("Enter the number you want to reverse : ");
    scanf("%d",&n);
    for(int i = n ; i>0 ; i = i/10){
        int j = i%10;
        rev = rev*10 + j;
    }
    printf("The reverse of the number is %d",rev);
}