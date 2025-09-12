#include <stdio.h>
#include <stdarg.h>   // Required for variable arguments (va_list, va_start, va_arg, va_end)

/*
    Purpose:
    --------
    Demonstrate how to create a function in C that accepts
    a variable number of arguments using <stdarg.h>.

    Notes:
    ------
    - A variable argument function allows passing different numbers of arguments.
    - printf(), scanf(), etc. are classic examples.
    - Must have at least one fixed parameter before "..." (here: count).
    - Limitations:
       * No type checking → programmer must know argument types.
       * No direct way to know number of arguments → usually pass a count.
*/

int sum(int count, ...) {
    int total = 0;

    // Step 1: Declare a list to hold variable arguments
    va_list args;

    // Step 2: Initialize the list using last known fixed argument
    va_start(args, count);

    // Step 3: Access each argument using va_arg
    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);   // here each argument is treated as int
        total += num;
    }

    // Step 4: Clean up
    va_end(args);

    return total;
}

int main() {
    printf("Sum(3, 10, 20, 30) = %d\n", sum(3, 10, 20, 30));
    printf("Sum(5, 1, 2, 3, 4, 5) = %d\n", sum(5, 1, 2, 3, 4, 5));
    return 0;
}

/*
Output:
Sum(3, 10, 20, 30) = 60
Sum(5, 1, 2, 3, 4, 5) = 15
*/