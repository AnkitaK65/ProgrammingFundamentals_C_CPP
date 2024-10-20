#include <stdio.h>

/*
Question:
8. Write a macro that swaps two numbers. WAP to use it.
*/

// Macro to swap two numbers
#define SWAP(x, y) do { \
    typeof(x) temp = x; \
    x = y; \
    y = temp; \
} while (0)

int main() {
    int a, b;

    // Get user input
    printf("Enter two numbers:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    // Print original values
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    // Swap the numbers
    SWAP(a, b);

    // Print swapped values
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

/*
Here's a brief comparison of macros and functions in C:

Comparison of Macros and Functions in C
Definition:

Macro: Defined using #define, expanded by the preprocessor before compilation.
Function: Defined with a return type, name, and parameters, compiled as part of the program.
Type Safety:

Macro: No type checking; potential for type-related errors.
Function: Enforces type checking, ensuring correct argument types.
Evaluation:

Macro: Replaced at the point of use, which can lead to code bloat and side effects.
Function: Executed at runtime; arguments are evaluated once, preventing unintended side effects.
Debugging:

Macro: More challenging to debug; lacks stack frames and can obscure error locations.
Function: Easier to debug, with a clear execution context and local variable visibility.
Recursion:

Macro: Cannot be recursive.
Function: Can be recursive, allowing a function to call itself.
Scope:

Macro: Global scope; may cause name collisions.
Function: Has its own scope, allowing for overloading and better encapsulation.
*/