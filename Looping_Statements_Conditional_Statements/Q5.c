// WAP to print factorial of given number
#include <stdio.h>

int main() {
    int num;
    int  factorial = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }
}
