#include <stdio.h>
#include <string.h>

// Define a structure to represent a Student
struct Student {
    char name[50];   // Name of the student
    int rollNumber;  // Roll number of the student
    float marks;     // Marks obtained by the student
};

int main() {
    struct Student s1; // Declare a variable of type Student

    // Assigning values to the structure members
    strcpy(s1.name, "Alice");   // Assign name using strcpy to handle strings
    s1.rollNumber = 101;        // Assign roll number
    s1.marks = 92.5;            // Assign marks

    // Display the initial student record
    printf("Student Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollNumber);
    printf("Marks: %.2f\n", s1.marks);

    // Modifying individual members
    s1.marks += 5; // Adding grace marks to the student
    strcpy(s1.name, "Alice Johnson"); // Changing the student's name

    // Displaying the updated student record
    printf("\nUpdated Student Record:\n");
    printf("Student Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollNumber);
    printf("Marks: %.2f\n", s1.marks);

    return 0; // End of the program
}
/*
Student Name: Alice
Roll Number: 101
Marks: 92.50

Updated Student Record:
Student Name: Alice Johnson
Roll Number: 101
Marks: 97.50
*/