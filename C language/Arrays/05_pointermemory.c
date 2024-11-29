//CODED BY SHIVANG :)


#include<stdio.h>
int main(){
int marks[5];
printf("Enter the marks of 5 subjects\n");
for (int i=0;i<5;i++){
    scanf("%d",&marks[i]);
    }

for (int i=0;i<5;i++){
printf("The adress of marks at index %d is and it's address is %d\n",i,&marks[i]);
}
return 0;
}

/*The outpu will be* - 
The adress of marks at index 0 is and it's address is 6422276
The adress of marks at index 1 is and it's address is 6422280
The adress of marks at index 2 is and it's address is 6422284
The adress of marks at index 3 is and it's address is 6422288
The adress of marks at index 4 is and it's address is 6422292

As we know int is of 4 bytes and it is visible that address continious addition of 4 hence we know the 
memory allocation structure of array
AND HENCE WE SAY THAT ARRAYS ARE CONTIGUOUS BLOCKS IN MEMORY*/