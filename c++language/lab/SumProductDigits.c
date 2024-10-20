#include <stdio.h>

/*
Question:
1. Print the sum and product of digits of an integer.
*/

// Function to compute the sum and product of digits
void sumAndProductOfDigits(int number) {
    int sum = 0, product = 1;
    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        sum += digit;            // Add digit to sum
        product *= digit;        // Multiply digit to product
        number /= 10;            // Remove the last digit
    }
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);
}

int main() {
    int number;

    // Get user input
    printf("Enter an integer: ");
    scanf("%d", &number);
    sumAndProductOfDigits(number);

    return 0;
}
