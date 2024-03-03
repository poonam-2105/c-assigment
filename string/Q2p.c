//Q2)= Write a program in C to separate individual characters from a string.
#include <stdio.h>

int main() {
    char str[100]; // Assuming maximum string length is 100

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Separate and print individual characters
    printf("Individual characters of the string:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}
