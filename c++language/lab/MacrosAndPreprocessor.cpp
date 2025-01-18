// Program to demonstrate macros for addition, subtraction, and multiplication
// It also shows the use of conditional compilation for code blocks.

#include <iostream>
using namespace std;

// Defining macros for basic arithmetic operations
#define ADD(a, b) ((a) + (b))
#define SUBTRACT(a, b) ((a) - (b))
#define MULTIPLY(a, b) ((a) * (b))

// Conditional compilation for different platforms
#define WINDOWS

int main() {
    int num1, num2;

    // Input numbers
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Using macros for addition, subtraction, and multiplication
    cout << "Addition: " << ADD(num1, num2) << endl;
    cout << "Subtraction: " << SUBTRACT(num1, num2) << endl;
    cout << "Multiplication: " << MULTIPLY(num1, num2) << endl;

    // Conditional Compilation based on platform
    #ifdef WINDOWS
        cout << "\nThis code block is compiled for Windows platform." << endl;
    #elif defined(LINUX)
        cout << "\nThis code block is compiled for Linux platform." << endl;
    #else
        cout << "\nNo specific platform defined." << endl;
    #endif

    return 0;
}

/*
Output:
Enter two integers: 10 5
Addition: 15
Subtraction: 5
Multiplication: 50

This code block is compiled for Windows platform.
*/