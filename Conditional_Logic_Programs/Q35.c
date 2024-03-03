// 35.Accept the input month number and print number of days in that
// month
#include <stdio.h>

int main() {
    int month_number, days;

    // Input month number
    printf("Enter month number (1-12): ");
    scanf("%d", &month_number);

    // Calculate days in the month
    switch(month_number) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28; // Assuming non-leap year for simplicity
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
            return 1; // Exit with error code
    }

    // Print number of days in the month
    printf("Number of days in month %d: %d\n", month_number, days);

    return 0;
}
