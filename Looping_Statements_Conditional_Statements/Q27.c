//Q27)= 27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n
#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    double sum = 0;
    int sign = 1; // To alternate between adding and subtracting
    for (int i = 1; i <= n; ++i) {
        sum += sign * (double)i / (i + 1);
        sign = -sign; // Change sign for the next term
    }

    // Print the sum of the series
    printf("Sum of the series 1/2 - 2/3 + 3/4 - 4/5 + ... + %d/%d = %.2lf\n", n, n + 1, sum);

    return 0;
}
