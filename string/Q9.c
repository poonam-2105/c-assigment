//Q9)= Write a program in C to find the maximum number of characters in a string.
// 
#include <stdio.h>

int main() {
    // Assuming maximum string length 
    char str[100]; 
    int max_length = 0, length = 0;
    int i = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the maximum number of characters in the string
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            length++;
        } else {
            if (length > max_length) {
                max_length = length;
            }
            length = 0; // Reset length for next word
        }
        i++;
    }

    // Check if the last word is the longest
    if (length > max_length) {
        max_length = length;
    }

    // Print the maximum number of characters
    printf("Maximum number of characters in the string: %d\n", max_length);

    return 0;
}
