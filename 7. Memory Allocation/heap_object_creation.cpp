#include <iostream>
using namespace std;

class MyClass {
public:
    int data;
    MyClass(int val) { 
        cout << "Constructor called with value: " << val << endl; 
        data = val;
    }
    ~MyClass() { 
        cout << "Destructor called for value: " << data << endl; 
    }
};

int main() {
    // *** Single Object Creation ***
    cout << "Creating a single object on the heap:\n";
    MyClass* obj = new MyClass(10); // Object created on the heap

    // Accessing the object's members using pointer
    cout << "Value in object: " << obj->data << endl;

    // Deleting the single object
    delete obj; // Destructor called and memory freed

    cout << "\n";

    // *** Array of Objects Creation ***
    cout << "Creating an array of objects on the heap:\n";
    MyClass* objArray = new MyClass[3]{ {1}, {2}, {3} }; // Array of objects on the heap

    // Accessing array elements using pointer
    for (int i = 0; i < 3; ++i) {
        cout << "Value in object " << i + 1 << ": " << objArray[i].data << endl;
    }

    // Deleting the array of objects
    delete[] objArray; // Destructor called for each object, memory freed

    return 0;
}
// Creating a single object on the heap:
// Constructor called with value: 10
// Value in object: 10
// Destructor called for value: 10

// Creating an array of objects on the heap:
// Constructor called with value: 1
// Constructor called with value: 2
// Constructor called with value: 3
// Value in object 1: 1
// Value in object 2: 2
// Value in object 3: 3
// Destructor called for value: 3
// Destructor called for value: 2
// Destructor called for value: 1