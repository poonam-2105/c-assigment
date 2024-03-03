// Q23)=C Program to Reverse a Number Using FOR Loop
// Series Program
#include <stdio.h>

int main() {
    int num, reversednum = 0, remainder;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Reverse the number using a for loop
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        reversednum = reversednum * 10 + remainder;
    
    
    // Print the reversed number
    printf("Reversed number: %d\n", reversednum);
    
    // Calculate the sum of the series 1 + 2 + 3 + ... + num
    int sum = 0;
    for (int i = 1; i <= num; ++i) {
        sum += i;
    }
    
    // Print the sum of the series
    printf("Sum of the series 1 + 2 + 3 + ... + %d: %d\n", num, sum);
    
    return 0;
}
}