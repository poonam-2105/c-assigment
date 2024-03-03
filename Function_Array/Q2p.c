//Q2)= WAP of Addition, Subtraction, Multiplication and Division using
// Switchcase.(Must Be Menu Driven
#include <stdio.h>

// Function to perform addition
int addition(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtraction(int a, int b) {
    return a - b;
}

// Function to perform multiplication
int multiplication(int a, int b) {
    return a * b;
}

// Function to perform division
int division(int a, int b) {
    return a / b;
}

int main(){
    int choice;
    int num1, num2;
    
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    switch (choice) {
        case 1:
            printf("Result: %d\n", addition(num1, num2));
            break;
        case 2:
            printf("Result: %d\n", subtraction(num1, num2));
            break;
        case 3:
            printf("Result: %.d\n", multiplication(num1, num2));
            break;
        case 4:
            if (num2 != 0)
                printf("Result: %d\n", division(num1, num2));
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}

