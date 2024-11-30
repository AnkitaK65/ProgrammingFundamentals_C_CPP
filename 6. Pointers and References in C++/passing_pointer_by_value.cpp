// Topic: Passing Pointer by Value in C++

#include <iostream>
using namespace std;

// Function to modify the value at the pointer's address
void modifyValue(int *ptr) {
    *ptr = 20; // Dereference the pointer to modify the value it points to
}

int main() {
    int num = 10;         // Declare an integer variable
    int *ptr = &num;      // Pointer to the address of 'num'

    cout << "Before function call: " << num << endl;

    // Passing the pointer to the function by value
    modifyValue(ptr);

    cout << "After function call: " << num << endl;

    return 0;
}
// Before function call: 10
// After function call: 20