// WAP to Input an array and print even-valued elements.

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

    // Output: Printing even-valued elements
    cout << "Even-valued elements in the array are:\n";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";  // Print the even element
        }
    }

    return 0;  // Indicate that the program ended successfully
}
