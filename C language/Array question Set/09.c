//Create a 3d array and print the address of its elements in increasing order

#include <stdio.h>

int main() {
    int arr[2][3][4];  // Declares a 3D array of size 2x3x4
    for (int i = 0; i < 2; i++) {       // Loop through the first dimension (2 layers)
        for (int j = 0; j < 3; j++) {   // Loop through the second dimension (3 rows per layer)
            for (int k = 0; k < 4; k++) { // Loop through the third dimension (4 columns per row)
                // Print the address of the element at arr[i][j][k]
                printf("The address of element i=%d, j=%d, k=%d is %u\n", 
                       i, j, k, (void*)&arr[i][j][k]);
            }
        }
    }
    return 0;
}
