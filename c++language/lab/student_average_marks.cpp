// Q. Structure Members: Create a Student structure. Input details of 5 students and calculate their average marks.

#include <iostream>
#include <string>
using namespace std;

// Define a structure to store student details
struct Student {
    string name;   // Student Name
    int roll;      // Roll Number
    float marks;   // Marks
};

int main() {
    // Create an array of 5 Student structures
    Student students[5];
    float totalMarks = 0.0f; // Variable to store the sum of marks

    // Input details for each student
    cout << "Enter details of 5 students:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Enter Name: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, students[i].name);
        cout << "Enter Roll Number: ";
        cin >> students[i].roll;
        cout << "Enter Marks: ";
        cin >> students[i].marks;

        totalMarks += students[i].marks; // Add marks to the total
    }

    // Calculate the average marks
    float averageMarks = totalMarks / 5;

    // Display student details
    cout << "\nDetails of Students:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Name: " << students[i].name << ", Roll Number: " << students[i].roll << ", Marks: " << students[i].marks << "\n";
    }

    // Display the average marks
    cout << "\nAverage Marks of all students: " << averageMarks << "\n";

    return 0;
}

/*
Output:
Enter details of 5 students:

Student 1:
Enter Name: Alice Johnson
Enter Roll Number: 101
Enter Marks: 85.5

Student 2:
Enter Name: Bob Smith
Enter Roll Number: 102
Enter Marks: 78.0

Student 3:
Enter Name: Charlie Brown
Enter Roll Number: 103
Enter Marks: 92.3

Student 4:
Enter Name: Daisy Miller
Enter Roll Number: 104
Enter Marks: 88.0

Student 5:
Enter Name: Ethan Hunt
Enter Roll Number: 105
Enter Marks: 74.5

Details of Students:
Name: lice Johnson, Roll Number: 101, Marks: 85.5
Name: Bob Smith, Roll Number: 102, Marks: 78
Name: Charlie Brown, Roll Number: 103, Marks: 92.3
Name: Daisy Miller, Roll Number: 104, Marks: 88
Name: Ethan Hunt, Roll Number: 105, Marks: 74.5

Average Marks of all students: 83.66
*/