// WAP to print number in reverse order e.g.: number = 64728 ---> 
//reverse =82746
#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Reversing the number
    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    printf("The number in reverse order is: %d\n", reversedNumber);

    return 0;
}
