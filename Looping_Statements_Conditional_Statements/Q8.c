// Write a program to find out the max from given number (E.g., No: -
//1562Max number is 6)
#include <stdio.h>

int main() {
    int number, maxDigit = -1;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Finding the maximum digit
    while (number != 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    printf("The maximum digit in the given number is: %d\n", maxDigit);

    return 0;
}
