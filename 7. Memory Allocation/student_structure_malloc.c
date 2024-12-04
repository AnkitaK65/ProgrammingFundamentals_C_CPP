/*
   Topic: Dynamic Memory Allocation for Structures in C

   Description:
   Write a C program to define a structure `Student` with fields for 
   name, roll number, and marks. Allocate memory for this structure 
   dynamically using `malloc`, take input from the user to populate 
   the fields, and then display the values.

   Key Concepts:
   - Use of `malloc` to dynamically allocate memory for a structure.
   - Accessing structure members using the `->` operator.
   - Proper memory deallocation using `free`.
*/

#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

// Define the structure for Student
struct Student {
    char name[50];   // Name of the student
    int rollNumber;  // Roll number of the student
    float marks;     // Marks of the student
};

int main() {
    // Step 1: Allocate memory for a Student structure using malloc
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    if (student == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Step 2: Take input from the user
    printf("Enter student's name: ");
    scanf("%49s", student->name); // Use -> operator for dynamically allocated structure
    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);
    printf("Enter marks: ");
    scanf("%f", &student->marks);

    // Step 3: Display the information
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Marks: %.2f\n", student->marks);

    // Step 4: Free the allocated memory
    free(student);

    return 0; // Indicate successful execution
}
// Enter student's name: Alice
// Enter roll number: 101
// Enter marks: 85.50

// --- Student Details ---
// Name: Alice
// Roll Number: 101
// Marks: 85.50