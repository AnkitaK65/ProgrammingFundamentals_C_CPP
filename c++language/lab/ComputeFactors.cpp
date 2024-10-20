#include <iostream>
using namespace std;

/*
Question:
7. Write a program to compute the factors of a given number.
*/

// Function to compute factors of a given number
void computeFactors(int number) {
    cout << "Factors of " << number << " are: ";
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int number;

    // Get user input
    cout << "Enter a number: ";
    cin >> number;

    // Compute and display the factors
    computeFactors(number);

    return 0;
}
