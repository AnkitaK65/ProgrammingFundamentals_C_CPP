#include <stdio.h>

/*
Question:
2. Reverse a number.
*/

// Function to reverse a number
int reverseNumber(int number) {
    int reversed = 0;
    while (number > 0) {
        int digit = number % 10;  // Extract the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        number /= 10;              // Remove the last digit
    }
    return reversed;
}

int main() {
    int number;

    // Get user input
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Reversed number: %d\n", reverseNumber(number));

    return 0;
}
