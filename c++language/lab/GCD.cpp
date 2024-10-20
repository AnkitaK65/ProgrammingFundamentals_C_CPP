#include <iostream>
using namespace std;

// Program to calculate GCD of two numbers
// (i) Using recursion
// (ii) Without recursion

// Function prototypes
int gcd_recursive(int a, int b);
int gcd_iterative(int a, int b);

int main() {
    int num1, num2;

    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    // Calculate and display GCD using recursion
    cout << "GCD of " << num1 << " and " << num2 << " (using recursion) is: " << gcd_recursive(num1, num2) << endl;

    // Calculate and display GCD without recursion
    cout << "GCD of " << num1 << " and " << num2 << " (without recursion) is: " << gcd_iterative(num1, num2) << endl;

    return 0;
}

// Function to calculate GCD using recursion (Euclidean algorithm)
int gcd_recursive(int a, int b) {
    if (b == 0)
        return a; // Base case
    return gcd_recursive(b, a % b); // Recursive case
}

// Function to calculate GCD without recursion (Euclidean algorithm)
int gcd_iterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b; // Update b
        a = temp;  // Update a
    }
    return a; // GCD is stored in a
}
