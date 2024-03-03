//Q10)=.WAP to perform Palindrome number using for loop and function
#include <stdio.h>

// Function to check if a number is palindrome
int palindrome(int num) {
    int reversednum = 0, originalnum = num;
    
    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversednum = reversednum * 10 + digit;
        num /= 10;
    }
    
    // Check if the reversed number is equal to the original number
    if (originalnum == reversednum)
        return 1; // Palindrome
    else
        return 0; // Not a palindrome
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (palindrome(number))
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);
    
    return 0;
}
