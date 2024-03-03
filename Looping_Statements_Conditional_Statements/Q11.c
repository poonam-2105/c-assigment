// 10.Write a program you have to make a summation of first and last
// Digit. (E.g.,
// 1234 Ans: -5)
#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Extracting first digit
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Extracting last digit
    lastDigit = num % 10;

    // Calculating sum
    sum = firstDigit + lastDigit;

    // Output
    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
