#include <iostream>
using namespace std;

union Employee {
    int empID;
    float salary;
    char grade;
};

int main() {
    Employee emp;

    // Assign and manipulate integer member
    emp.empID = 1234;
    cout << "Employee ID: " << emp.empID << endl;

    // Modify and manipulate float member (overwrites empID)
    emp.salary = 75000.50;
    cout << "Employee Salary: " << emp.salary << endl;

    // Modify and manipulate char member (overwrites salary)
    emp.grade = 'A';
    cout << "Employee Grade: " << emp.grade << endl;

    // Attempt to access overwritten members (undefined behavior)
    cout << "Accessing overwritten Employee ID: " << emp.empID << " (may give incorrect value)" << endl;

    return 0;
}

/*
Employee ID: 1234
Employee Salary: 75000.5
Employee Grade: A
Accessing overwritten Employee ID: 1200782401 (may give incorrect value)
*/