#include <iostream>
#include <string>  // Include the string library
using namespace std;

struct Student {
    string name;  // Use std::string for name
    int rollNumber;
    float marks;
};

// Function to create and return a Student structure
//In C++11 and later, string literals are considered constant
//const string &name: This indicates that the name array is not modified and is a constant pointer to a string literal.
Student createStudent(const string &name, int roll, float marks) {  // Pass name as a reference to avoid copy
    Student s;
    s.name = name;  // Assign the string directly
    s.rollNumber = roll;
    s.marks = marks;

    return s;
}

int main() {
    // Calling the function and storing the returned structure
    Student student1 = createStudent("Charlie", 103, 88.5);

    cout << "Student Details:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Roll Number: " << student1.rollNumber << endl;
    cout << "Marks: " << student1.marks << endl;

    return 0;
}

/*
Student Details:
Name: Charlie
Roll Number: 103
Marks: 88.5
*/