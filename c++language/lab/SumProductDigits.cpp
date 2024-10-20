#include <iostream>
using namespace std;

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
    cout << "Sum of digits: " << sum << endl;
    cout << "Product of digits: " << product << endl;
}

int main() {
    int number;

    // Get user input
    cout << "Enter an integer: ";
    cin >> number;
    sumAndProductOfDigits(number);

    return 0;
}
