// Topic: Dangling Pointer in C++

#include <iostream>
using namespace std;

int main() {
    int *ptr = new int(10); // Dynamically allocate memory and initialize with 10
    // Before deletion,
    cout << "Accessing deleted memory: " << *ptr << endl;
    
    delete ptr;             // Deallocate memory, leaving ptr as a dangling pointer

    // After deletion, accessing the value pointed to by ptr is undefined behavior
    cout << "Accessing deleted memory: " << *ptr << endl; // Undefined behavior

    // Best practice: Nullify the pointer after deletion
    ptr = nullptr;

    return 0;
}
// Accessing deleted memory: 10
// Accessing deleted memory: -876920768
