#include <stdio.h>

// Topic: Nested Structure

// Define the inner structure to represent a date
struct Date {
    int day;
    int month;
    int year;
};

// Define the outer structure to represent an employee
struct Employee {
    char name[50];             // Name of the employee
    int id;                    // Employee ID
    struct Date dateOfBirth;   // Nested Date structure for the employee's date of birth
};

int main() {
    // Declare and initialize an Employee structure variable
    struct Employee emp = {"Alice", 1001, {12, 5, 1995}};

    // Accessing and displaying members of the outer and inner structures
    printf("Name: %s\n", emp.name);                          // Print employee name
    printf("ID: %d\n", emp.id);                              // Print employee ID
    printf("Date of Birth: %02d-%02d-%d\n",                  // Print employee date of birth
           emp.dateOfBirth.day,                              // Access day from nested structure
           emp.dateOfBirth.month,                            // Access month from nested structure
           emp.dateOfBirth.year);                            // Access year from nested structure

    return 0;
}

/*
Name: Alice
ID: 1001
Date of Birth: 12-05-1995
*/
