//CODED BY SHIVANG :)


#include<stdio.h>

int main(){
int n1,n2,n3,sum,avg;
printf("Enter three numebrs you want to find sum of : ");
scanf("%d%d%d",&n1,&n2,&n3);
sum = n1+n2+n3;
avg = sum/3;      //Divided by 3 as there are three numbers
printf("The sum of three numbers is %d\n",avg);

//Can also directly do l ike the following way
printf("The sum of three numbers is %d\n",(n1+n2+n3)/3);


return 0;
}