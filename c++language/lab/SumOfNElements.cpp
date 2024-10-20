#include <iostream>
using namespace std;

/*
Question:
Write a program to find the sum of n elements entered by the user.
To write this program, allocate memory dynamically using new operator.
*/

int main() {
    int n, sum = 0;

    // Ask the user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Allocate memory dynamically for n integers
    int* arr = new int[n];

    // Input elements
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate the sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the sum
    cout << "Sum of the elements: " << sum << endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}
