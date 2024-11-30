//CODED BY SHIVANG :)

//Fgets is a function that is used to recieve multi-word string  

#include<stdio.h>

int main(){
char str[3];

/*When you use fgets(), the third argument specifies the input stream where
 the function will read data from. If you want to read data from the keyboard, you pass stdin*/

fgets(str,sizeof(str),stdin);           //It works like scanf
puts(str);          //It works like printf and give the cursor on the next line
return 0 ;
}

//there is not so much use and use of fget in college course so this is all you need to know about fgets
//It automatically removes the part of str that overflows