//CODED BY SHIVANG :)

//Wacp to count the number of positive integers inside an array using functions 

#include <stdio.h>

// Function to count positive integers in the array
int pos(int arr[], int size) {
    int count = 0;  // Initialize count to 0

    // Loop through the array and count positive integers
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;  // Increment count for positive integers
        }
    }

    return count;  // Return the count of positive integers
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];  // Declare the array with the input size

    // Inputting array elements by user side
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to count positive integers
    int positiveCount = pos(arr, size);

    // Print the result
    printf("Number of positive integers: %d\n", positiveCount);

    return 0;
}
