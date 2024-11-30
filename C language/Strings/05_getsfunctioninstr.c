//CODED BY SHIVANG :)

//Gets is a function that is used to recieve multi-word string  

#include<stdio.h>

int main(){
char str[2];
gets(str);           //It works like scanf
puts(str);          //It works like printf and give the cursor on the next line
return 0 ;

/*Using gets is not to good as fgets() allows you to specify the maximum number of characters to read, ensuring that the input
 will not overflow the buffer fgets automatically do new line after pressing enter evenly in modern c gets() is removed
 due to its tremendous memory allocatuion and memory overflow issue 
 for example here i initialised 2 memory allocation in str but i can store longer than that which will not give me
 any error but will use non allocated memory which can result in future program crash*/
}