//Q25)= (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }

    // Print the sum of the series
    printf("Sum of the series (1*1) + (2*2) + (3*3) + ... + (%d*%d) = %d\n", n, n, sum);

    return 0;
}
