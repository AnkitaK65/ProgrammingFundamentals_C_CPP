//Passing an Array of Structures to a Function

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

// Function to display employee details
void displayEmployees(struct Employee emp[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Employee %d: Name: %s, ID: %d, Salary: %.2f\n",
            i + 1, emp[i].name, emp[i].id, emp[i].salary);
    }
}

int main() {
    struct Employee employees[2] = {
        {"John", 1001, 50000.0},
        {"Jane", 1002, 60000.0}
    };

    // Passing array of structures to the function
    displayEmployees(employees, 2);

    return 0;
}
/*
Employee 1: Name: John, ID: 1001, Salary: 50000.00
Employee 2: Name: Jane, ID: 1002, Salary: 60000.00
*/