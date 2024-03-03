//Q32)=.Accept 2 numbers and find out its sum check it size 
#include <stdio.h>
#include <stdint.h>

int main() {
    int num1, num2, sum;

    // Accepting two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculating the sum
    sum = num1 + num2;

    // Printing the sum
    printf("Sum: %d\n", sum);

    // Checking the size of the sum
    printf("Size of sum in bytes: %lu\n", sizeof(sum));

    return 0;
}
