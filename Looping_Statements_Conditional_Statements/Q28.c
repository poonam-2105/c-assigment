//Q28)= 1 2 3 6 9 18 27 54..
#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Initialize the first term of the series
    int term = 1;

    // Print the first term
    printf("%d ", term);

    // Generate subsequent terms of the series
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            term *= 2;
        } else {
            term *= 3;
        }
        // Print the current term
        printf("%d ", term);
    }

    return 0;
}
