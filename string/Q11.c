//Q11)= Write a program in C to read a sentence and replace lowercase characters 
// withuppercase and vice versa.
#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100]; // Assuming maximum sentence length is 1000
    int i = 0;

    // Input sentence from user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Loop through each character of the sentence
    while (sentence[i] != '\0') {
        // Check if the character is lowercase
        if (islower(sentence[i])) {
            // Convert lowercase to uppercase
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            // Convert uppercase to lowercase
            sentence[i] = tolower(sentence[i]);
        }
        i++;
    }

    // Print the modified sentence
    printf("Modified sentence: %s\n", sentence);

    return 0;
}
