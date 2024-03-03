// Q9)=WAP to show difference between Structure and Union.
#include <stdio.h>
#include <string.h>

// Define a structure
struct employee {
    int empid;
    char name[50];
    float salary;
};

// Define a union
union number {
    int intvalue;
    float floatvalue;
};

int main() {
    // Structure usage
    struct employee emp1;
    emp1.empid = 1;
    strcpy(emp1.name,"poonam sharma");
    emp1.salary = 50000;

    printf("employee details (structure):\n");
    printf("employee id: %d\n", emp1.empid);
    printf("employe name: %s\n", emp1.name);
    printf("emoloye salary: %.2f\n", emp1.salary);

    // Union usage
    union number num;
    num.intvalue = 10;

    printf("\n(number value union - inteager):\n");
    printf("interger value: %d\n", num.intvalue);
    printf("float value: %.2f\n", num.floatvalue);

    num.floatvalue = 0.10;

    printf("\nnumber value (Union - Float):\n");
    printf("integer value: %d\n", num.intvalue);
    printf("float value: %.2f\n", num.floatvalue);

    return 0;
}
