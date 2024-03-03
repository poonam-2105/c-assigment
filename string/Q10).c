//Q7)= Write a program in C to extract a substring from a given string
#include <stdio.h>

int main() {
    char str[100]; // Assuming maximum string length 
    char substring[100]; // Assuming maximum substring length 
    int start, end, length = 0;
    int i;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input start and end positions of substring
    printf("Enter start position of substring: ");
    scanf("%d", &start);
    printf("Enter end position of substring: ");
    scanf("%d", &end);

    // Extracting substring
    for (i = start; i <= end && str[i] != '\0'; i++) {
        substring[length++] = str[i];
    }
    substring[length] = '\0'; // Adding null terminator to mark end of substring

    // Print the extracted substring
    printf("Extracted substring: %s\n", substring);

    return 0;
}
