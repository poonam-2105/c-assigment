// Q7)=WAP Find out length of string without using inbuilt function


#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    
    // Iterate through the string until null terminator is encountered
    while (*str != '\0') {
        length++;
        str++;
    }
    
    return length;
}

int main() {
    char str[] = "poonamsharma";
    
    // Find the length of the string(poonamsharma)
    int length = stringLength(str);
    
    printf("Length of the string: %d\n", length);
    
    return 0;
}
