//Q3)= Write a program in C to print individual characters of a string in reverse
// order
#include <stdio.h>

int main() {
    // Assuming maximum string length is 100
    char str[100]; 
    int length = 0;

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate length of string
    while (str[length] != '\0') {
        length++;
    }

    // Print individual characters of the string in reverse order
    printf("Individual characters of the string in reverse order:\n");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}
