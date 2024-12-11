//Take 5 subjects input and find the sum and percentage

#include<stdio.h>

int main(){
int n1,n2,n3,n4,n5,sum;
float per;
printf("Enter the marks of 5 subjects");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
sum = n1+n2+n3+n4+n5;
per = sum/5;
printf("\nThe sum is %d and the percentage is %f",sum,per);
return 0;
}