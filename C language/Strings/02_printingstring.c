//CODED BY SHIVANG :)

//Writing a program to print all the elements of string and printing them usng loop
//Formata specifier for string is %s
#include<stdio.h>

int main(){
char st[] = {'S','H','I','V','A','N','G','\0'};
char st1[] = "Shivang""\t""Dubey\n"; //Used to store a string which can contain many characters at once no need to apply \0 here
char st2[] = "C language";
for (int i = 0; i < 8; i++)
{
    printf("%c\n",st[i]);
}
printf("%s", st1);
printf("%s", st2);
return 0;
}