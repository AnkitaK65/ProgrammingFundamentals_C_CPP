#include <iostream>
using namespace std;

// Define a structure to represent a student
struct Student {
    char name[50];     // Array to store student's name
    int rollNumber;    // Variable to store student's roll number
    float marks;       // Variable to store student's marks
};

int main() {
    // Create a student variable and initialize it
    Student s1 = {"Alice", 101, 87.5};

    // Accessing and printing members of the structure
    cout << "Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.rollNumber << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
