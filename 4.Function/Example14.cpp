/*
Topic: Variable Number of Arguments
This program uses variadic functions in C++ (using '...').
Variadic functions in C are functions that can accept a variable number of arguments.
It finds the sum of given numbers.
*/

#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    va_end(args);
    return total;
}

int main() {
    cout << "Sum of 3,4,5: " << sum(3, 3, 4, 5) << endl;
    return 0;
}

/*
Output:
Sum of 3,4,5: 12
*/