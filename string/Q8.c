//Q8)= Write a program in C to count the total number of vowels or consonants 
// in astring
#include <stdio.h>

int main() {
    char str[100]; // Assuming maximum string length is 1000
    int vowels = 0, consonants = 0;
    int i = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count the total number of vowels and consonants
    while (str[i] != '\0') {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    // Print the counts
    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}
