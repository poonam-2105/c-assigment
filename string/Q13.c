// Q13)=
// Write a program in C to remove characters from a string except 
// alphabets
#include <stdio.h>

int main() {
    char str[100]; // Assuming maximum string length is 100
    int i, j;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove non-alphabetic characters in place
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Add null terminator to mark end of string

    // Print the resulting string with non-alphabetic characters removed
    printf("Resulting string after removing non-alphabetic characters: %s\n", str);

    return 0;
}
