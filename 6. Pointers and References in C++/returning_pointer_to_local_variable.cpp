// Topic: Returning Pointer to Local Variables (Unsafe) in C++

#include <iostream>
using namespace std;

// Function to demonstrate unsafe behavior
int* getLocalVar() {
    int num = 10;  // Local variable allocated on the stack
    return &num;   // Returning pointer to a local variable (unsafe)
}

int main() {
    int* ptr = getLocalVar();  // The pointer now holds an address to invalid memory

    // Accessing memory pointed to by 'ptr' leads to undefined behavior
    cout << "Value: " << *ptr << endl;  // This may print garbage or cause a crash

    return 0;
}
// Possible Output:
// Garbage Value: Value: 32767
// Segmentation Fault: Program may crash.

// Output:
// returning_pointer_to_local_variable.cpp:9:13: warning: address of stack memory associated with local variable 'num' returned [-Wreturn-stack-address]
//     return &num;   // Returning pointer to a local variable (unsafe)
//             ^~~
// 1 warning generated.