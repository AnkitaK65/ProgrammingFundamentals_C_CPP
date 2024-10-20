#include <iostream>
using namespace std;

// Function prototypes
unsigned long long factorial_recursive(int n);
unsigned long long factorial_iterative(int n);

// unsigned long long is used to store the factorial value because:
// 1. Factorials grow very rapidly; for example, 20! (factorial of 20) is 2,432,902,008,176,640,000, which exceeds the maximum value that can be stored in a standard int or long type on most systems.
// 2. The unsigned modifier allows for larger positive values (up to 18,446,744,073,709,551,615 for unsigned long long) since factorials are always non-negative.

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    // Calculate and display factorial using recursion
    cout << "Factorial of " << n << " (using recursion) is: " << factorial_recursive(n) << endl;

    // Calculate and display factorial using iteration
    cout << "Factorial of " << n << " (using iteration) is: " << factorial_iterative(n) << endl;

    return 0;
}

// Function to calculate factorial using recursion
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1) // Base case
        return 1;
    return n * factorial_recursive(n - 1); // Recursive case
}

// Function to calculate factorial using iteration
unsigned long long factorial_iterative(int n) {
    unsigned long long factorial = 1; // Initialize factorial

    for (int i = 2; i <= n; i++) {
        factorial *= i; // Multiply factorial by each number
    }
    return factorial;
}
