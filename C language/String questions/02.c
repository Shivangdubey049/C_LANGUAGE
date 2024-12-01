// Function to count the length of a string


#include <stdio.h>

int countstr(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[101]; // Declare a fixed-size array (5 characters + null terminator)
    printf("Enter a string (max 100 characters): ");

    // Read input using fgets (safely handles spaces and newlines)
    fgets(str, sizeof(str), stdin);  // Reads up to 5 characters + '\0'

    // Remove the newline character, if present
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';  // Replace newline with null terminator
        }
    }

    // Call countstr and print the result
    int length = countstr(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}
