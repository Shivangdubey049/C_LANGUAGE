//Making a string slicing fubnction which cuts the string into two parts

#include<stdio.h>

void slice(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;  // Count the number of characters in the string
    }

    int sl = count / 2;  // Calculate the index for the middle point

    // Print the first half of the string
    printf("First slice is : \n");
    for (int i = 0; i < sl; i++) {
        printf("%c", str[i]);  // Print each character one by one
    }
    printf("\n");


    printf("Second slice is : \n");
    for (int j = sl; j <= count; j++) {
        printf("%c", str[j]);  // Print each character one by one
    }
    printf("\n");
}

void main() {
    char str[101];
    printf("Enter the string (Max character of 100): ");
    
    // Use fgets to read input
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';  // Replace newline with null terminator
        }
    }

    // Call the slice function to print the first half of the string
    slice(str);
}
