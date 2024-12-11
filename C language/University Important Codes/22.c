//Wacp to check the number is palindrome or not

#include<stdio.h>
void main(){
    int i,dup,n,rev=0;
    printf("Enter the number you want to check is palindrome or not : ");
    scanf("%d",&n);
    dup = n;
    for(i = n ; i>0 ; i = i/10){
        int j = i%10;
        rev = rev*10+j;
    }
    if (rev==dup)
    printf("It is a palindrome");
    else
    printf("it is not a palindrome");
}