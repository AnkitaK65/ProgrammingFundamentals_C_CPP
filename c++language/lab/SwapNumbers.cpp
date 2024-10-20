#include <iostream>
using namespace std;

/*
Question:
Write a program that swaps two numbers using pointers.
*/

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a; // Store the value at the address of a
    *a = *b;       // Assign the value at the address of b to a
    *b = temp;    // Assign the stored value to b
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Print values before swapping
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Call the swap function
    swap(&num1, &num2);

    // Print values after swapping
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
