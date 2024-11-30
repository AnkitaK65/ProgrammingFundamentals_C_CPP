// Topic: Using nullptr in C++

#include <iostream>
using namespace std;

int main() {
    int num = 10;         // Normal integer variable
    int *ptr = nullptr;   // Pointer initialized to nullptr (null pointer)

    // Output the value of 'num'
    cout << "Value of num: " << num << endl;

    // Output the address of 'num'
    cout << "Address of num: " << &num << endl;

    // Check if pointer 'ptr' is null before dereferencing it
    if (ptr == nullptr) {
        cout << "Pointer 'ptr' is null, cannot dereference." << endl;
        // cout << ptr << endl; //gives: 0x0
        // cout << *ptr << endl; // error
    } else {
        cout << "Value pointed to by ptr: " << *ptr << endl; // Will not be executed
    }

    // Now assign the address of 'num' to 'ptr'
    ptr = &num;

    // Output the value pointed to by 'ptr' after assignment
    cout << "Pointer 'ptr' now points to address: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl; // Outputs value of 'num'

    return 0;
}

// Value of num: 10
// Address of num: 0x16b657138
// Pointer 'ptr' is null, cannot dereference.
// Pointer 'ptr' now points to address: 0x16b657138
// Value pointed to by ptr: 10
