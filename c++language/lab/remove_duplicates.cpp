//WAP to remove duplicate elements from an array and print the result.

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

    // Removing duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // If a duplicate is found, shift all elements left to remove it
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;  // Reduce the size of the array
                j--;  // Decrement j to check the shifted element
            }
        }
    }

    // Output: Printing the array after removing duplicates
    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;  // Indicate that the program ended successfully
}
