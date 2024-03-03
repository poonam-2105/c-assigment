// Write a program in C to compare two strings without using string
// libraryfunctions.
#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int isequal = 1; // Assume strings are equal initially

    // Input first string from user
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input second string from user
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare strings character by character
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            isequal = 0; // Strings are not equal
            break;
        }
        i++;
    }

    // Check if both strings have ended at the same time
    if (str1[i] != '\0' || str2[i] != '\0') {
        isequal = 0; // Strings are not equal
    }

    // Print the result
    if (isequal) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
