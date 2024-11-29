//CODED BY SHIVANG :)


#include<stdio.h>
float bmi(float h,float wt){
    float bmical = wt/(h*h);
    return bmical;

}

void main(){
    float wt,h;
    printf("Enter the height in m : ");
    scanf("%f",&h);
    printf("Enter the weight in kgs : ");
    scanf("%f",&wt);
    printf("The BMI for given inputs is %0.2f",bmi(h,wt));
}