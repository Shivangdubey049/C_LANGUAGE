//CODED BY SHIVANG :)

//We can also make a str which will change value by using pointer normally the str cannot be changed
#include<stdio.h>
void main(){
char *ptr = " Shivang";
ptr = " is my name"; //The string is overwritten as the data is overwritten at the address
printf("%s",ptr);

char ptr1[2] = "Heyo";
ptr1[0] = "Hello there";  //Will throw an error as the string cannot be changed
printf("%s",ptr1);

}