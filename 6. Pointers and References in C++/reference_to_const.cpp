// Topic: Reference to Constant Variable

#include <iostream>
using namespace std;

int main() {
    const int a = 10;  // Constant variable
    const int& ref = a;  // Reference to a constant variable

    cout << "a: " << a << endl;  // Output: 10
    cout << "ref: " << ref << endl;  // Output: 10

    // ref = 20;  // Error: Cannot modify a constant variable through a reference
    
    return 0;
}
//Error If Uncommented: 
// reference_to_const.cpp:8:16: note: variable 'ref' declared const here
//     const int& ref = a;  // Reference to a constant variable

// a: 10
// ref: 10