#include <stdio.h>
#include <string.h> // For removing trailing newline from fgets input

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[3]; // Array of 3 Student structures
    int i;

    // Input details for each student
    for (i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        // Using fgets to read a full line for the name, allowing spaces
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove trailing newline
        // The newline character (if present) is replaced by \0 (the null terminator),
        // which signifies the end of the string in C.
        // For example, if the user enters Alice and presses Enter, 
        // the string stored in students[i].name will be "Alice\n\0", 
        // where \n is the newline and \0 is the null terminator marking the end of the string.
        
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        // Clear the input buffer to prevent issues with fgets on the next loop iteration
        while (getchar() != '\n');
    }

    // Display the details of each student
    printf("\nStudent Records:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d: Name: %s, Roll Number: %d, Marks: %.2f\n",
            i + 1, students[i].name, students[i].rollNumber, students[i].marks);
    }

    return 0;
}

/*
Enter details for Student 1:
Name: Alice
Roll Number: 101
Marks: 89.5
Enter details for Student 2:
Name: Bob Smith
Roll Number: 102
Marks: 76.0
Enter details for Student 3:
Name: Charlie Brown
Roll Number: 103
Marks: 92.3

Student Records:
Student 1: Name: Alice, Roll Number: 101, Marks: 89.50
Student 2: Name: Bob Smith, Roll Number: 102, Marks: 76.00
Student 3: Name: Charlie Brown, Roll Number: 103, Marks: 92.30
*/
