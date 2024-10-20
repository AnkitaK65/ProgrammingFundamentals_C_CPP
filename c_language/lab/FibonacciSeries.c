#include <stdio.h>

// Function prototypes
int fibonacci_recursive(int n);
void fibonacci_iterative(int n);

int main() {
    int n;

    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    // Display Fibonacci series using recursion
    printf("\nFibonacci series (using recursion):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci_recursive(i));
    }

    // Display Fibonacci series using iteration
    printf("\n\nFibonacci series (using iteration):\n");
    fibonacci_iterative(n);

    return 0;
}

// Function to calculate Fibonacci number using recursion
int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Function to display Fibonacci series using iteration
void fibonacci_iterative(int n) {
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // First two Fibonacci numbers are 0 and 1
        } else {
            next = a + b; // Calculate next Fibonacci number
            a = b; // Update previous two Fibonacci numbers
            b = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

/*
Enter the number of terms in Fibonacci series: 10

Fibonacci series (using recursion):
0 1 1 2 3 5 8 13 21 34 

Fibonacci series (using iteration):
0 1 1 2 3 5 8 13 21 34 

*/