#include <iostream>
using namespace std;

/*
Question:
8. Write a macro that swaps two numbers. WAP to use it.
*/

// Macro to swap two numbers
#define SWAP(x, y) do { \
    auto temp = x; \
    x = y; \
    y = temp; \
} while (0)

int main() {
    int a, b;

    // Get user input
    cout << "Enter two numbers:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    // Print original values
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    
    // Swap the numbers
    SWAP(a, b);

    // Print swapped values
    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}

/*
Here's a brief comparison of macros and functions in C++:

1. Definition:
Macro: Defined using #define. Replaced by the preprocessor before compilation.
Function: Defined with a return type and parameters. Compiled as part of the program.
2. Type Safety:
Macro: No type checking. Can lead to unexpected behavior with mismatched types.
Function: Enforces type checking, ensuring correct parameter types.
3. Evaluation:
Macro: Expanded at the point of use, potentially causing code bloat and issues with side effects.
Function: Evaluated at runtime, preventing side effects from multiple evaluations.
4. Debugging:
Macro: Harder to debug due to lack of scope and stack frames.
Function: Easier to debug with clear execution flow and local variables.
5. Recursion:
Macro: Cannot be recursive.
Function: Can be recursive, allowing for self-calls.
6. Scope:
Macro: Global scope; may cause name clashes.
Function: Has its own scope; supports overloading.
*/