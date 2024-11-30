// Topic: Passing Pointer by Reference in C++

#include <iostream>
using namespace std;

// Function to modify the pointer itself
void modifyPointer(int*& ptr) {
    // Modify the pointer to point to a different memory location
    static int temp = 30;  // Static variable to ensure it persists after the function ends
    ptr = &temp;           // Change the pointer to point to 'temp'
}

int main() {
    int num = 10;         // Declare an integer variable
    int *ptr = &num;      // Pointer pointing to the address of 'num'

    cout << "Before function call: " << *ptr << endl; // Dereference to show value at the pointer's address

    // Passing the pointer by reference to allow modification of the pointer itself
    modifyPointer(ptr);

    cout << "After function call: " << *ptr << endl;  // Dereference to show new value at the pointer's address

    return 0;
}
/*
Notes:
- modifyPointer(int*& ptr) accepts a reference to a pointer.
- The function can now change the pointer itself, making it point to a different memory location (&temp).
- The original pointer (ptr) in the calling function is modified and now points to temp.

*/

// Before function call: 10
// After function call: 30