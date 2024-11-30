//CODED BY SHIVANG :)

#include<stdio.h>

int main(){
    /* The \0 is a null character a null character is used to mark termination of the string 
    if you dont write this then you can face errors such as - 
    Memory Corruption , Undefined Behavior in Standard Library Functions , Infinite Loops , Incorrect String Length , Garbage Data in Output
    */
char str[5] = {'x','y','z','w','\0'};//A string named str is made which stores 5 characters \0 refers the end of the string but it also requires 1 charac space
printf("The character at index 3 is %c",str[3]);  //Printing the string is same as printing the array
return 0;
}

/* As array of integer used to store data according to the bytes of data and in contiguous address the same is with the string

*/