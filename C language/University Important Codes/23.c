//Wacp to check the given number is armstrong or not

#include<stdio.h>
void main(){
    int n,r,dup, arm = 0;
    printf("Enter the number you want to find armstrong of : ");
    scanf("%d",&n);
    dup = n;
    while(n!=0){
    r = n%10;
    arm = r*r*r + arm;
    n = n/10;
    }
    if (arm==dup)
    printf("It is armstrong number");
    else
    printf("It is not an armstrong number");
}