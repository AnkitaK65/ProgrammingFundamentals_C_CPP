#include <stdio.h>

// Define a union for EmployeeID with two members: idNumber and initials
union EmployeeID {
    int idNumber;         // Integer to store employee ID
    char initials[3];     // Character array to store employee initials
};

int main() {
    union EmployeeID emp; // Declare a variable of type union EmployeeID

    // Assigning an integer value to the idNumber member
    emp.idNumber = 12345;
    // Displaying the ID number
    printf("Employee ID Number: %d\n", emp.idNumber);

    // Assigning initials to the initials array (this overwrites the idNumber)
    emp.initials[0] = 'J';
    emp.initials[1] = 'D';
    emp.initials[2] = '\0';  // Null-terminate the string

    //Note: The integer value of idNumber is lost after assigning the initials.

    // Displaying the employee initials
    printf("Employee Initials: %s\n", emp.initials);

    return 0;
}

/*
Employee ID Number: 12345
Employee Initials: JD
*/