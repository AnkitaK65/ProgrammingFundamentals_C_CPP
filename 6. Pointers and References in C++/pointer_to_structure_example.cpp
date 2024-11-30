// Topic: Declaring and Using Pointers to Structures in C++

#include <iostream>
using namespace std;

// Define a structure named 'Student'
struct Student {
    int rollNo;     // Member to store the roll number of the student
    string name;    // Member to store the name of the student
};

int main() {
    // Declare and initialize a structure variable
    Student student1 = {101, "John Doe"};

    // Declare a pointer to the structure and assign it the address of 'student1'
    Student *ptr = &student1;

    // Access structure members using pointer and '->' operator
    cout << "Roll Number: " << ptr->rollNo << endl;  // Using the '->' operator to access rollNo
    cout << "Name: " << ptr->name << endl;           // Using the '->' operator to access name

    // Alternatively, using dereferencing and '.' operator
    // This demonstrates the equivalent method to access structure members
    cout << "Roll Number (using dereferencing): " << (*ptr).rollNo << endl;
    cout << "Name (using dereferencing): " << (*ptr).name << endl;

    return 0;
}
// Roll Number: 101
// Name: John Doe
// Roll Number (using dereferencing): 101
// Name (using dereferencing): John Doe