// Q12)=WAP to accept 5 students name and store it in array
#include <stdio.h>
#include <string.h>

#define max_length 50 // Maximum length of a student name

int main() {
    // Array to store student names
    char student_names[5][max_length]; 
    int i;

    // Accepting input from the user
    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(student_names[i], max_length, stdin);
        // Removing newline character from input
        student_names[i][strcspn(student_names[i], "\n")] = '\0';
    }

    // Displaying the entered names
    printf("\nNames of students:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, student_names[i]);
    }

    return 0;
}
