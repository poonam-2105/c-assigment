// Write a program make a summation of given number (E.g., 1523 Ans: -
// 11)
#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculating the sum of digits
    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("The summation of digits of the given number is: %d\n", sum);

    return 0;
}
