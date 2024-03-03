// Write a program in C to count the total number of alphabets, digits and
// specialcharacters in a string.
#include <stdio.h>

int main() {
    // Assuming maximum string length is 1000
    char str[1000]; 
    int alphabets = 0, digits = 0, special = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count the total number of alphabets, digits, and special characters
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            special++;
        }
    }

    // Print the counts
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", special);

    return 0;
}
