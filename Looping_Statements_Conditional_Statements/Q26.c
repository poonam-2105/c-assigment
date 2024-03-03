//Q26)= (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    int sum = 0;
    int seriessum = 0;
    for (int i = 1; i <= n; ++i) {
        seriessum += i;
        sum += seriessum;
    }

    // Print the sum of the series
    printf("Sum of the series (1) + (1+2) + (1+2+3) + ... + (1+2+3+...+n) = %d\n", sum);

    return 0;
}
