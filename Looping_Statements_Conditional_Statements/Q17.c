// Calculate 5 numbers from user and calculate number of even and odd using
// of while loop
#include <stdio.h>

int main() {
    int count = 1;
    int even_count = 0;
    int odd_count = 0;
    int num;

    printf("Enter 5 numbers:\n");

    // While loop to input numbers and calculate even and odd counts
    while (count <= 5) {
        printf("Enter number %d: ", count);
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        
        count++;
    }

    // Output the counts
    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);

    return 0;
}
