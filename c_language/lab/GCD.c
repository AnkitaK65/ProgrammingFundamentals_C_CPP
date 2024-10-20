#include <stdio.h>

// Program to calculate GCD of two numbers
// (i) Using recursion
// (ii) Without recursion

// Function prototypes
int gcd_recursive(int a, int b);
int gcd_iterative(int a, int b);

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and display GCD using recursion
    printf("GCD of %d and %d (using recursion) is: %d\n", num1, num2, gcd_recursive(num1, num2));

    // Calculate and display GCD without recursion
    printf("GCD of %d and %d (without recursion) is: %d\n", num1, num2, gcd_iterative(num1, num2));

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
