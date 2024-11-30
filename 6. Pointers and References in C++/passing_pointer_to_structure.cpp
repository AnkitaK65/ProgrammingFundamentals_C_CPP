// Topic: Passing Pointer to Structure in C++

#include <iostream>
using namespace std;

// Define a structure named 'Student'
struct Student {
    int rollNo;       // Roll number of the student
    string name;      // Name of the student
};

// Function to modify structure members using a pointer
void modifyStudent(Student* ptr) {
    // Access and modify structure members through the pointer
    ptr->rollNo = 102;  // Modify the roll number
    ptr->name = "Alice"; // Modify the name
}

int main() {
    Student s = {101, "John"}; // Initialize a 'Student' structure

    // Display the structure's initial values
    cout << "Before function call: " << s.rollNo << " " << s.name << endl;

    // Pass the address of the structure to the function
    modifyStudent(&s);

    // Display the structure's values after modification
    cout << "After function call: " << s.rollNo << " " << s.name << endl;

    return 0;
}
// Before function call: 101 John
// After function call: 102 Alice