// 10.Write a program you have to make a summation of first and last
//Digit. (E.g.,
//1234 Ans: -5)
#include <stdio.h>

int main() {
    int number, first_Digit, last_Digit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Extracting the first digit....;
    first_Digit = number;
    while (first_Digit >= 10) {
        first_Digit /= 10;
    }

    // Extracting the last digit.......;
    last_Digit = number % 10;

    // Calculating the sum
    sum = first_Digit + last_Digit;

    printf("The summation of the first and last digits of the given number is: %d\n", sum);

    return 0;
}
