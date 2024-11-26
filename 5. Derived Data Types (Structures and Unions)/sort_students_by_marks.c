// Topic: Sorting an Array of Structures by a Member Field (Marks)
#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Initialize an array of student structures
    struct Student students[3] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 90.0},
        {"Charlie", 103, 78.5}
    };
    struct Student temp; // Temporary variable for swapping during sorting

    // Sorting the array of students by marks in descending order using Bubble Sort
    for (int i = 0; i < 3 - 1; i++) { // Outer loop for passes
        for (int j = 0; j < 3 - i - 1; j++) { // Inner loop for pairwise comparisons
            if (students[j].marks < students[j + 1].marks) { 
                // Swap if the current student's marks are less than the next student's marks
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Display the sorted student records
    printf("Sorted Student Records (by marks):\n");
    for (int i = 0; i < 3; i++) {
        // Print the name, roll number, and marks of each student
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n",
            students[i].name, students[i].rollNumber, students[i].marks);
    }

    return 0;
}
/*
Sorted Student Records (by marks):
Name: Bob, Roll Number: 102, Marks: 90.00
Name: Alice, Roll Number: 101, Marks: 85.50
Name: Charlie, Roll Number: 103, Marks: 78.50
*/