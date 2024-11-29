//CODED BY SHIVANG :)



#include<stdio.h>

int main(){
int i =34;          //Initialisation and delaration
int *j= &i;         //Adrress of i is stored in j
int **k=&j;         //Adress of j is stored in k

printf("The value of i is %d\n", i);
printf("The value of i is %d\n", *j);
printf("The value of i is %d\n", *(&i));
printf("The value of i is %d\n", **(&j)); //One * cut down with one & then remains *j which we know is value of i
printf("The value of i is %d\n", **k);

//It is just like one & can be cut down from one * like we do in nrml maths

return 0;
}