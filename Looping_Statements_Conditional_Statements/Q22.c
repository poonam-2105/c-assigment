// 22. Accept 3 numbers from user using while loop and check each numbers
// palindrome
#include <stdio.h>

int ispalindrome(int num) {
    int reversednum = 0, originalnum = num;
    
    // Reverse the number
    while (num > 0) {
        int remainder = num % 10;
        reversednum = reversednum * 10 + remainder;
        num /= 10;
    }
    
    // Check if the reversed number is equal to the original number
    if (originalnum == reversednum)
        return 1; // Palindrome
    else
        return 0; // Not a palindrome
}

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check if each number is a palindrome
    if (ispalindrome(num1))
        printf("%d is a palindrome.\n", num1);
    else
        printf("%d is not a palindrome.\n", num1);

    if (ispalindrome(num2))
        printf("%d is a palindrome.\n", num2);
    else
        printf("%d is not a palindrome.\n", num2);

    if (ispalindrome(num3))
        printf("%d is a palindrome.\n", num3);
    else
        printf("%d is not a palindrome.\n", num3);

    return 0;
}
