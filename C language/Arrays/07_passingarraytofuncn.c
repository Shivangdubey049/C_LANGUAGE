//CODED BY SHIVANG :)



//Here we will learn to pass aray to function just the basic part of it
#include<stdio.h>
int avg(int arr[],int n){           //Making a function named as avg
    int sum = 0 ;                  //Initialising sum = 0 so that it doesn't hold any garbage value
    float average = 0 ;           //Initialising average = 0 so that it doesn't hold any garbage value

    for(int i=0;i<n;i++ ){       //Running a loop for every value of i and adding the values byu assigning it to sum
         sum = sum + arr[i];
}
average= sum/n;                 //Assigning the average to average (here, sum is sum of all values of array and n is length of array)
return average;                 //Returning the value of average as output in themain function

}

void main(){
    int marks[5] = {45,35,50,43,34};                //Initialising an arary named marks of type integer
    int size = sizeof(marks)/sizeof(marks[0]);      //To find no of elements
/*sizeof(marks) gives the total size in bytes of the entire array marks sizeof(marks[0]) gives the size in bytes of a 
single element of the array So by simple calculation here, 20 divided by 4 = 5 i.e the number of values passed in the array 

*/
    float average = avg(marks,size);    /*PAsssing the values to the function 
    NOTE: Dont write (marks[]) here as arary is not send to function it is the pointer that is being send to the function */
    printf("The average of the marks is : %0.2f",average);
}