// Topic: Passing Array of Nested Structures by Reference

#include <iostream>

using namespace std;

// Define the nested structure
struct Date {
    int day;
    int month;
    int year;
};

// Define the outer structure
struct Employee {
    string name;
    Date joiningDate;
};

// Function to modify array of structures by pointer
void modifyEmployeeDetails(Employee* empArray) {
    // Modify employee details using '->' operator
    empArray[0].name = "Alice";
    empArray[0].joiningDate.day = 15;
    empArray[0].joiningDate.month = 3;
    empArray[0].joiningDate.year = 2018;

    empArray[1].name = "Bob";
    empArray[1].joiningDate.day = 10;
    empArray[1].joiningDate.month = 6;
    empArray[1].joiningDate.year = 2019;
}

int main() {
    // Initialize array of structures
    Employee employees[2] = {
        {"Charlie", {1, 7, 2020}},
        {"David", {5, 9, 2021}}
    };

    // Display employee details before modification
    cout << "Before modification:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Employee " << i + 1 << ": " << employees[i].name 
            << ", Joining Date: " << employees[i].joiningDate.day << "-" 
            << employees[i].joiningDate.month << "-" << employees[i].joiningDate.year << endl;
    }

    // Passing array by pointer to modify the data
    modifyEmployeeDetails(employees);

    // Display employee details after modification
    cout << "\nAfter modification:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Employee " << i + 1 << ": " << employees[i].name 
            << ", Joining Date: " << employees[i].joiningDate.day << "-" 
            << employees[i].joiningDate.month << "-" << employees[i].joiningDate.year << endl;
    }

    return 0;
}
/*
Before modification:
Employee 1: Charlie, Joining Date: 1-7-2020
Employee 2: David, Joining Date: 5-9-2021

After modification:
Employee 1: Alice, Joining Date: 15-3-2018
Employee 2: Bob, Joining Date: 10-6-2019
*/