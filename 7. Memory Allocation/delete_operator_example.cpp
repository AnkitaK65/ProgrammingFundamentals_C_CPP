#include <iostream>
using namespace std;

// Topic: delete operator

class MyClass {
public:
    MyClass() { cout << "Constructor called\n"; }
    ~MyClass() { cout << "Destructor called\n"; }
};

int main() {
    // Allocating memory for a single object
    MyClass* obj = new MyClass;

    // Deleting the object
    delete obj; // Calls the destructor and frees the memory

    // Allocating memory for an array of objects
    MyClass* arr = new MyClass[3];

    // Deleting the array of objects
    delete[] arr; // Calls destructors for each object and frees the memory

    return 0;
}

// Constructor called
// Destructor called
// Constructor called
// Constructor called
// Constructor called
// Destructor called
// Destructor called
// Destructor called