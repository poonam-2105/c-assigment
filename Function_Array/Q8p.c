// Q8)=WAP to reverse a string and check that the string is palindrome
// or notWrite a program of structure employee that provides the
// following
#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;
    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Function to check if a string is palindrome
int isPalindrome(char *str) {
    int length = strlen(str);
    int i, j;
    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    reverseString(str);
    
    printf("Reversed string: %s\n", str);
    
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
