//CODED BY SHIVANG :)



//Integer takes 4 bytes storage whereas characters takes 1 byte storage
#include<stdio.h>

int main(){
int a = 7;
int *ptr = &a;

printf("The address of a in the memory is %d\n",ptr);
printf("The address of a in the memory is %d\n",&a);
ptr++;
printf("The address of a in the memory is %d\n\n\n",ptr);


/*What will happen if I will do ptr++? Will the value increase by 1?
Remember the value stored in ptr is address of the value of the variable, value sotred in ptr is the address of the int variable
SO, an int type variable take 4 byts so if the address before came to be 6422296 then after ptr++ 4 will be added and output will be 6422300
Simple maths -> 6422296 + 4 = 6422300
*/

//Character takes 1 byte of memory
char b = 'A';
char *ptr1 = &b;

printf("The address of b in the memory is %d\n",ptr1);
printf("The address of b in the memory is %d\n",&b);
ptr1++;
printf("The address of b in the memory is %d\n",ptr1);

/*What will happen if I will do ptr++? Will the value increase by 1?
Remember the value stored in ptr is address of the value of the variable, value sotred in ptr is the address of the char variable
SO, an char type variable take 1 byts so if the address before came to be 6422291 then after ptr++ 4 will be added and output will be 6422292
Simple maths -> 6422291 + 1 = 6422292

Like this substaraction can also be done
*/

return 0;
}