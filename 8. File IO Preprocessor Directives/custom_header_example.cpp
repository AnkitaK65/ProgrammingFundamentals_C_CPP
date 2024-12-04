// Topic: Custom Header File in C++
// Question: Create a custom header file having some macros and include it in your C++ program.
// Explanation: This program demonstrates how to use a custom header file containing a macro for calculating the square of a number.

#include <iostream>
#include "square_macro.h"  // Including the custom header file with the macro

int main() {
    int num = 5;

    // Using the macro from the custom header file
    std::cout << "The square of " << num << " is " << SQUARE(num) << std::endl;
    
    return 0;
}
// The square of 5 is 25