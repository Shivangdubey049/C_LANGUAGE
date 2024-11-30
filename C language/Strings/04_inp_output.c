//CODED BY SHIVANG :)

#include<stdio.h>

int main(){
char st[6];
printf("Enter the string");
scanf("%5s", &st);  // the \0 is automatically applied here at input of a string
/*If i runt this program without &5s then st can take a very long input but i declared st[6], so the unallocated
memory is used which is dangerous to do as memory will be occupied and in long program run will crash the program or produce issues*/
printf("%s",st);
return 0;
}