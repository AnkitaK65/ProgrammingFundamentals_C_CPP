#include <iostream>
using namespace std;

// Topic: delete operator

class MyClass {
public:
    MyClass() { cout << "Constructor called\n"; }
    ~MyClass() { cout << "Destructor called\n"; }
};

int main() {
    // *** Case 1: Stack Allocation ***
    cout << "Stack Allocation:\n";
    MyClass obj; // Object created on the stack
    {
        MyClass arr[3]; // Array of objects on the stack
        // Objects in 'arr' are automatically destroyed when the block ends
    }

    cout << "\n";

    // *** Case 2: Heap Allocation ***
    cout << "Heap Allocation:\n";

    // Single object on the heap
    MyClass* heapObj = new MyClass;

    // Array of objects on the heap - Allocating memory for an array of objects
    MyClass* heapArr = new MyClass[3];

    // Deleting the single object
    delete heapObj; // Destructor called, memory freed

    // Deleting the array of objects
    delete[] heapArr; // Destructors called for all objects, memory freed

    return 0;
}
//Output:
// Stack Allocation:
// Constructor called
// Constructor called
// Constructor called
// Constructor called
// Destructor called
// Destructor called
// Destructor called

// Heap Allocation:
// Constructor called
// Constructor called
// Constructor called
// Constructor called
// Destructor called
// Destructor called
// Destructor called
// Destructor called
// Destructor called