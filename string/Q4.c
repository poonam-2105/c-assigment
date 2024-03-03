// Q4)=
// Write a program in C to count the total number of words in a string
#include <stdio.h>

int main() {
    char str[1000]; // Assuming maximum string length is 1000
    int words = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count the total number of words
    for (int i = 0; str[i] != '\0'; i++) {
        // Check for space, tab or newline characters
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            words++;
        }
    }

    // Incrementing word count for the last word if any
    if (words > 0) {
        words++;
    }

    // Print the total number of words
    printf("Total number of words in the string: %d\n", words);

    return 0;
}
