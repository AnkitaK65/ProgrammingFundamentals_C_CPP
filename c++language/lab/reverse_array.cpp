// WAP to Print the elements of an array in reverse order.

#include <iostream>  // Include input/output stream library
using namespace std;

int main() {
    int n;  // Declare variable for number of elements

    // Input: Asking user to enter the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare the array of size n

    // Input: Asking user to enter the elements of the array
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Output: Printing the elements of the array in reverse order
    cout << "Array elements in reverse order:\n";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;  // Indicate that the program ended successfully
}
