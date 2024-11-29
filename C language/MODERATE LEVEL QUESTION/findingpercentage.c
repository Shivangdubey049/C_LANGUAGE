//CODED BY SHIVANG :)


#include<stdio.h>

int main(){
int n1,n2,n3,n4,n5,n6;
float per;
printf("Enter six subjects you want to find percentage of : ");
scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6);
per = (n1+n2+n3+n4+n5+n6)/6;
printf("The percentage calculated is 0.2%f\n",per);

//Can also directly do l ike the following way
printf("The percentage calculated is 0.2%f\n",(n1+n2+n3+n4+n5+n6)/6);


return 0;
}