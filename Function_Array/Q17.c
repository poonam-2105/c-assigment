// Q17)=.WAP to show difference between
// Structure and Union
#include <stdio.h>

// Define a structure
struct Student {
    int roll_number;
    float marks;
};

// Define a union
union Number {
    int integer;
    float floating_point;
};

int main() {
    // Creating an object of structure Student
    struct Student student1;
    student1.roll_number = 1;
    student1.marks = 85;

    printf("Structure - Student Roll Number: %d\n", student1.roll_number);
    printf("Structure - Student Marks: %.2f\n", student1.marks);

    // Creating an object of union Number
    union Number num1;
    num1.integer = 10;
    printf("\nUnion - Integer: %d\n", num1.integer);
    num1.floating_point =10 ;
    printf("Union - Floating Point: %.2f\n", num1.floating_point);

    return 0;
}
