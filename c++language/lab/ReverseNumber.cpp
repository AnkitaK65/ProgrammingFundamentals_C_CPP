#include <iostream>
using namespace std;

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
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Reversed number: " << reverseNumber(number) << endl;

    return 0;
}
