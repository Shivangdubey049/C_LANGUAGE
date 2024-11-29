//CODED BY SHIVANG :)


#include<stdio.h>

int main(){
int cgpa[3] = {3,4,5};  // arrays can be sotred also like this
printf("The cgpa at 2 index is %d\n\n\n\n\n",cgpa[2]);


                    //What happens if the array length is to store 3 integers and we store more than that?
int marks[3] = {89,82,91};  // arrays can be sotred also like this
printf("The MARKS at 1 index is %d\n",marks[0]);              //OUTPUT WILL BE AS DESIRED - 89
printf("The MARKS at 2 index is %d\n",marks[1]);              //OUTPUT WILL BE AS DESIRED - 82
printf("The MARKS at 3 index is %d\n",marks[2]);              //OUTPUT WILL BE AS DESIRED - 91
printf("The MARKS at 4 index is %d\n",marks[3]);              //OUTPUT WILL BE A GARBAGE VALUE 
printf("The MARKS at 5 index is %d\n",marks[4]);              //OUTPUT WILL BE A GARBAGE VALUE
printf("The MARKS at 6 index is %d\n",marks[5]);              //OUTPUT WILL BE A GARBAGE VALUE 
printf("The MARKS at 7 index is %d\n",marks[6]);              //OUTPUT WILL BE A GARBAGE VALUE              

/* As it is seen that running this above piece of code will not give error, this will give garbage value as any sort of data
will not be stored in the array of index as the values passed exceeds the array limit that we initialised so the output will be garbage value*/
return 0;
}