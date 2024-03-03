// Q15)=
// Write a program in C to find the largest and smallest words in a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // Assuming maximum string length is 1000
    char largest_word[100], smallest_word[100]; // Assuming maximum word length is 100
    int i, j, len;
    int smallest_len = 9999; // Set an initial large value for comparison
    int largest_len = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the largest and smallest words in the string
    i = 0;
    while (str[i] != '\0') {
        // Skip leading spaces
        while (str[i] == ' ') {
            i++;
        }
        // Find the length of the current word
        len = 0;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            len++;
            i++;
        }
        // Check if the current word is the smallest
        if (len < smallest_len && len > 0) {
            smallest_len = len;
            j = 0;
            // Copy the smallest word
            while (len > 0) {
                smallest_word[j++] = str[i - len];
                len--;
            }
            smallest_word[j] = '\0'; // Add null terminator to mark end of word
        }
        // Check if the current word is the largest
        if (len > largest_len) {
            largest_len = len;
            j = 0;
            // Copy the largest word
            while (len > 0) {
                largest_word[j++] = str[i - len];
                len--;
            }
            largest_word[j] = '\0'; // Add null terminator to mark end of word
        }
        if (str[i] != '\0') {
            i++; // Move to next character
        }
    }

    // Print the largest and smallest words
    printf("Largest word: %s\n", largest_word);
    printf("Smallest word: %s\n", smallest_word);

    return 0;
}
