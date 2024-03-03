//Q 33)=. WAP to input the week number and print week day.
#include <stdio.h>

int main() {
    int weeknumber;

    // Input week number
    printf("Enter week number (1-7): ");
    scanf("%d", &weeknumber);

    // Print corresponding day of the week
    switch(weeknumber) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid week number! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
