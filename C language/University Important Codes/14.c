//Wacp to check whether the triangle is isoceles or not by taking input of sides from user

#include<stdio.h>
void main(){
    int n1,n2,n3;
    printf("Enter the 1st side of triangle\n");
    scanf("%d",&n1);
    printf("Enter the 2nd side of triangle\n");
    scanf("%d",&n2);
    printf("Enter the 3rd side of triangle\n");
    scanf("%d",&n3);

if(n1+n2>n3 && n1+n3>n2 && n2+n3>n1){   //To check whether the triangle is valid or not
    if(n1==n2 && n2==n3)
    printf("It is an equilateral triangle");
    else if(n1==n2||n2==n3||n1==n3)
    printf("It is an isoceles triangle");
    else
    printf("It is an scalene triangle");
    
    //Using pythagoras theorem

    if((n1*n1+n2*n2)==n3*n3||(n1*n1 + n3*n3)==n2*n2||(n2*n2 + n3*n3)==n1*n1)
    printf("It is a right angled triangle");

}
}