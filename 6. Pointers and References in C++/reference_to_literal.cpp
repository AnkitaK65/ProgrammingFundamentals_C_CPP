// Topic: Reference to a Literal

#include <iostream>
using namespace std;

int main() {
    const int& ref = 10;  // Reference to a constant literal
    cout << "ref: " << ref << endl;  // Output: 10

    // ref = 20;  // Error: Cannot modify a constant reference
    
    return 0;
}
// ref: 10

//Below error in uncommented
// reference_to_literal.cpp:10:9: error: cannot assign to variable 'ref' with const-qualified type 'const int &'
//     ref = 20;  // Error: Cannot modify a constant reference
//     ~~~ ^
// reference_to_literal.cpp:7:16: note: variable 'ref' declared const here
//     const int& ref = 10;  // Reference to a constant literal