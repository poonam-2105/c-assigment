// WAP to print table up to given numbers
#include <stdio.h>

int main() {
    int num;

    // Input the number for which you want to print the table
    printf("Enter the number for which you want to print the table: ");
    scanf("%d", &num);

    // Print the multiplication table
    printf("Multiplication table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

}
