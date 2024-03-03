// Q7)=Write a program in C to copy one string to another string.
#include <stdio.h>
#include<string.h>

int main() {
    char source[] = "Hello, World!"; // Source string
    char destination[100]; // Destination string
    int i = 0;

    // Copying string from source to destination
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Adding null terminator to mark end of string

    // Print the copied string
    printf("Copied string: %s\n", destination);

    return 0;
}
