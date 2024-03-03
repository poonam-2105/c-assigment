#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    int sum = (n * (n + 1)) / 2;

    // Print the sum of the series
    printf("Sum of the series 1 + 2 + 3 + ... + %d = %d\n", n, sum);

    return 0;
}
