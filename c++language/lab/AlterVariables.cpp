#include <iostream>
using namespace std;

/*
Question:
Write a program in which a function is passed the address of two variables and then alter its contents.
*/

// Function to alter the contents of two variables
void alter(int *a, int *b) {
    *a += 10; // Add 10 to the value at the address of a
    *b *= 2;  // Multiply the value at the address of b by 2
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Print values before alteration
    cout << "Before alteration: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Call the alter function
    alter(&num1, &num2);

    // Print values after alteration
    cout << "After alteration: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
