// Topic: Passing Array of Nested Structure to a Function
// Example: Display Employee Details

#include <stdio.h>

// Define Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define Employee structure with Date as a nested structure
struct Employee {
    char name[50];
    struct Date joiningDate;
};

// Function to display details of all employees
void displayEmployees(struct Employee employees[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Employee Name: %s\n", employees[i].name);
        printf("Joining Date: %02d-%02d-%d\n", employees[i].joiningDate.day, employees[i].joiningDate.month, employees[i].joiningDate.year);
    }
}

int main() {
    // Initialize an array of Employee structures
    struct Employee employees[2] = {
        {"Charlie", {1, 7, 2020}},
        {"Alice", {15, 5, 2019}}
    };
    
    // Pass the array of Employee structures to the function
    displayEmployees(employees, 2);

    return 0;
}
/*
Employee Name: Charlie
Joining Date: 01-07-2020
Employee Name: Alice
Joining Date: 15-05-2019
*/