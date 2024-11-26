// Topic: Passing Array of Structures by Pointer
// Example: Passing an Array of Employee Structures by Pointer to a Function

#include <iostream>
using namespace std;

// Define the structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

// Function to display details of all employees, passing an array of structures by pointer
void displayEmployees(Employee* empArray, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Employee " << i + 1 << " Name: " << empArray[i].name << endl;
        cout << "Employee ID: " << empArray[i].id << endl;
        cout << "Employee Salary: " << empArray[i].salary << endl << endl;
    }
}

int main() {
    // Initialize an array of Employee structures
    Employee employees[2] = {
        {"John", 1001, 50000.0},
        {"Jane", 1002, 60000.0}
    };

    // Pass the address of the array to the function
    displayEmployees(employees, 2);
    // Array Decay:
    // - When passing an array, it automatically becomes a pointer to the first element.
    // - `employees` is the same as `&employees[0]` in the function call.

    // No Need for `&`:
    // - `employees` already points to the first element, so `&employees` is unnecessary.

    return 0;
}
/*
Employee 1 Name: John
Employee ID: 1001
Employee Salary: 50000

Employee 2 Name: Jane
Employee ID: 1002
Employee Salary: 60000
*/