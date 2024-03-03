// Q16)=.Accept 5 numbers from user and perform 
// sum of array
#include <stdio.h>

int main() {
    int numbers[5]; // Array to store the numbers
    int i, sum = 0;

    // Accepting input from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i]; // Adding each number to the sum
    }

    // Displaying the sum of the array
    printf("\nSum of the array: %d\n", sum);

    return 0;
}
