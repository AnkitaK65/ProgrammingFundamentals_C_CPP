// Topic: Passing Structures by Pointer (Reference)
// Example: Passing Employee Structure by Pointer to a Function

#include <iostream>
using namespace std;

// Define the structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

// Function to display employee details by passing the structure as a pointer
void displayEmployee(Employee* emp) {
    cout << "Employee Name: " << emp->name << endl;
    cout << "Employee ID: " << emp->id << endl;
    cout << "Employee Salary: " << emp->salary << endl;
}

int main() {
    // Initialize an Employee structure
    Employee emp = {"John", 1001, 50000.0};

    // Pass the address of the structure to the function
    displayEmployee(&emp);

    return 0;
}
/*
Employee Name: John
Employee ID: 1001
Employee Salary: 50000
*/