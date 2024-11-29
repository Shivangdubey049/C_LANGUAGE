//CODED BY SHIVANG :)


#include<stdio.h>
int average(int a,int b,int c){     //Making funcn with three variable for avg of three numbers
    int avg = (a+b+c)/3;           //The formula for writing average of three numbers
    return avg;                   //Returning the value calculated in avg
}

void main(){
    int a,b,c;                    //Declaring three variables
    printf("Enter the three numebrs you want to find sum of : "); 
    scanf("%d%d%d",&a,&b,&c);
    printf("The average of three numbers is %d",average(a,b,c));//USing the average funcn foir three variable a,b,c
}