//CODED BY SHIVANG :)


#include<stdio.h>
int main(){
int arr[2][2];
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("Enter the element of the matrix %d %d : ",i,j);
        scanf("%d",&arr[i][j]);
    }
    
}

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("%d",arr[i][j]);  //Printing the matrix elements
    }
    printf("\n");   //To give the look of matrix i did this there will be no issue if you don't do this
}
/*
 Code Explanation:

We have to make nested for loop for taking the input or even printing the matrix (2d array) mlets understand this
1st row 1st colum element is stored as [0][0] remember the indexing start from 0,0 as it used to be earlier when we studied a normal array
so here we took the loop and then initialised i as 0 for the row part first then i did the same for the column part as column also do
start from 0 so youre giving input to 0,0 element of the matrix and then it goes like - [0][0] , [0][1] , [1][0] , [1][1]

Chat gpt explanation
       -The outer loop iterates over rows (`i`).
       - The inner loop iterates over columns (`j`).
       - You enter elements for each position in the matrix (row, column) using nested loops.
       - The matrix is stored as a 2D array, where indices start from 0.

Example Workflow:
Outer Loop (i):

Starts with i = 0 (1st row).
Inner Loop (j):

For j = 0, asks for the element at [0][0] and stores the input in arr[0][0].
For j = 1, asks for the element at [0][1] and stores the input in arr[0][1].
Outer Loop Iterates (i = 1):

For j = 0, asks for the element at [1][0] and stores it in arr[1][0].
For j = 1, asks for the element at [1][1] and stores it in arr[1][1].
*/
return 0;
}