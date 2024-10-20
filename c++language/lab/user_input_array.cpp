//WAP to Take the size and elements of an array from the user and print them.

#include <iostream>  // Include input/output stream library
using namespace std;

int main() {
    int n;  // Declare a variable for the size of the array

    // Input: Asking user to enter the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  // Declare the array with user-defined size

    // Input: Asking user to enter the elements of the array
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Read each element into the array
    }

    // Output: Printing the elements of the array
    cout << "The array elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print each element followed by a space
    }

    return 0;  // Indicate that the program ended successfully
}
