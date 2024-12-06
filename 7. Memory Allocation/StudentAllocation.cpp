#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int id;

    // Default Constructor (with default values)
    Student() {
        name = "Default Name";
        id = 0;
        cout << "Default Constructor called\n";
    }

    // Parameterized Constructor (Assignment in Constructor Body)
    Student(string n, int i) {
        name = n;  // Assigning value to the member variable
        id = i;    // Assigning value to the member variable
        cout << "Parameterized Constructor (Assignment) called\n";
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for: " << name << endl;
    }
};

int main() {
    // Creating a Student object using the default constructor
    Student defaultStudent; // Stack allocation
    cout << "Default Student Name: " << defaultStudent.name 
         << ", ID: " << defaultStudent.id << endl;

    cout << "\n";

    // Creating a Student object using the parameterized constructor
    Student student1("Alice", 1); // Stack allocation
    cout << "Student1 Name: " << student1.name << ", ID: " << student1.id << endl;

    cout << "\n";

    // Creating another Student object using the parameterized constructor
    Student student2("Bob", 2); // Stack allocation
    cout << "Student2 Name: " << student2.name << ", ID: " << student2.id << endl;

    cout << "\n";

    // Creating a Student object on the heap using the parameterized constructor
    Student* student3 = new Student("Charlie", 3); // Heap allocation
    cout << "Student3 Name: " << student3->name << ", ID: " << student3->id << endl;

    // Deleting the heap object
    delete student3;

    return 0;
}
// Default Constructor called
// Default Student Name: Default Name, ID: 0

// Parameterized Constructor (Assignment) called
// Student1 Name: Alice, ID: 1

// Parameterized Constructor (Assignment) called
// Student2 Name: Bob, ID: 2

// Parameterized Constructor (Assignment) called
// Student3 Name: Charlie, ID: 3
// Destructor called for: Charlie
// Destructor called for: Bob
// Destructor called for: Alice
// Destructor called for: Default Name