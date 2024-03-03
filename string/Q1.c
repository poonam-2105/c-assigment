// Q1)=Write a program in C to find the length of a string without using
// libraryfunctions.
// 
#include <stdio.h>

int main() {
    char str[100]; // Assuming maximum string length is 100
    int length = 0;

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate length of string
    while (str[length] != '\0') {
        length++;
    }

    // Print the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}
