// WAP to print Fibonacci series up to given numbers
#include <stdio.h>

int main() {
    int n, fib1 = 0, fib2 = 1, nextTerm = 0;

    printf("Enter the number up to which you want to print Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d is: ", n);

    while (fib1 <= n) {
        printf("%d, ", fib1);
        nextTerm = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextTerm;
    }

    return 0;
}
