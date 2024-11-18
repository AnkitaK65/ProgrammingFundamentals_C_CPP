#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent a student
struct Student {
    string name;
    /* IN C:
    char name[50]; // Fixed-size character array
    as C has: No Built-in String Class and Memory Management is Manual
    */
    int rollNumber;
    float marks;
};

int main() {
    // Method 1: Direct Initialization
    Student s1 = {"Alice", 101, 95.5};

    // Method 2: Using member access (dot notation)
    Student s2;
    s2.rollNumber = 102;
    s2.marks = 89.0;
    s2.name = "Bob";
    /*
    IN C:
    s2.name = "Bob"; // ❌ Error: incompatible types in assignment
    strcpy(s2.name, "Bob"); // Use strcpy to copy the string
    */ 

    // Display the structure members
    cout << "Student 1: " << s1.name << ", Roll No: " << s1.rollNumber << ", Marks: " << s1.marks << endl;
    cout << "Student 2: " << s2.name << ", Roll No: " << s2.rollNumber << ", Marks: " << s2.marks << endl;

    return 0;
}


/*
Output:
Student 1: Alice, Roll No: 101, Marks: 95.50
Student 2: Bob, Roll No: 102, Marks: 89.00
*/