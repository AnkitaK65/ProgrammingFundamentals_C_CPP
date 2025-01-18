// Q. Structures and Unions Basics: Create an employee structure and a union for integer, float, or char.
// Input details and demonstrate union usage.

#include <iostream>
#include <string>
using namespace std;

// Define a structure to store employee details
struct Employee {
    int id;         // Employee ID
    string name;    // Employee Name
    int age;        // Employee Age
    float salary;   // Employee Salary
};

// Define a union to store different data types
union Data {
    int intValue;     // Integer value
    float floatValue; // Float value
    char charValue;   // Character value
};

int main() {
    // Create an instance of the Employee structure
    Employee emp;

    // Input employee details
    cout << "Enter Employee ID: ";
    cin >> emp.id;
    cout << "Enter Employee Name: ";
    cin.ignore(); // To clear the newline character from the input buffer
    getline(cin, emp.name);//for name with space
    // if you know the name won't contain spaces, you can directly assign it using cin, like this:
    // cin >> emp.name;
    cout << "Enter Employee Age: ";
    cin >> emp.age;
    cout << "Enter Employee Salary: ";
    cin >> emp.salary;

    // Display employee details
    cout << "\nEmployee Details:\n";
    cout << "ID: " << emp.id << "\n";
    cout << "Name: " << emp.name << "\n";
    cout << "Age: " << emp.age << "\n";
    cout << "Salary: " << emp.salary << "\n";

    // Create an instance of the Data union
    Data data;

    // Demonstrate union usage
    cout << "\nDemonstrating Union Usage:\n";

    // Store and display an integer
    data.intValue = 42;
    cout << "Integer stored in union: " << data.intValue << "\n";

    // Store and display a float
    data.floatValue = 3.14f;
    cout << "Float stored in union (overwrites previous data): " << data.floatValue << "\n";

    // Store and display a character
    data.charValue = 'A';
    cout << "Character stored in union (overwrites previous data): " << data.charValue << "\n";

    /*
      Note:
      - In a union, all members share the same memory location.
      - Assigning a new value to one member overwrites the previous value.
    */

    return 0;
}
/*
Output:
Enter Employee ID: 101
Enter Employee Name: Alice
Enter Employee Age: 23
Enter Employee Salary: 20000.00

Employee Details:
ID: 101
Name: Alice Nancy
Age: 23
Salary: 20000

Demonstrating Union Usage:
Integer stored in union: 42
Float stored in union (overwrites previous data): 3.14
Character stored in union (overwrites previous data): A
*/