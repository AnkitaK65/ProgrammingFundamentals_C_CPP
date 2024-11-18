#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function to display student details
void displayStudent(Student s) {
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student student1 = {"Alice", 101, 92.5};

    // Passing the structure by value
    displayStudent(student1);

    return 0;
}

/*
Name: Alice
Roll Number: 101
Marks: 92.5
*/
