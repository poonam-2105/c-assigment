//Q .14.Write a program in C to combine two strings manually
#include <stdio.h>

int main() {
    char str1[1000], str2[1000]; // Assuming maximum string length is 1000

    // Input first string from user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Input second string from user
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Find the length of the first string
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }

    // Remove the newline character at the end of the first string
    if (str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
    }

    // Find the length of the second string
    int len2 = 0;
    while (str2[len2] != '\0') {
        len2++;
    }

    // Remove the newline character at the end of the second string
    if (str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

    // Combine the strings
    int i, j;
    for (i = 0; str1[i] != '\0'; i++) {
        printf("%c", str1[i]);
    }
    for (j = 0; str2[j] != '\0'; j++) {
        printf("%c", str2[j]);
    }

    printf("\n");

    return 0;
}
