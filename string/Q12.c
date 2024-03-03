//Q12)= Write a program in C to find the number of times a given word 'is' 
// appears inthe given string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Assuming maximum string length 
    char word[] = "is";
    int count = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the number of times the word 'is' appears
    char *ptr = str;
    while ((ptr = strstr(ptr, word)) != NULL) {
        count++;
        ptr += strlen(word);
    }

    // Print the number of times 'is' appears
    printf("The word 'is' appears %d times in the string.\n", count);

    return 0;
}