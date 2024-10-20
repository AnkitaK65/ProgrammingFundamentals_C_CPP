//WAP to Initialize a 1D array with specific values and print it.

#include <iostream>  // Include input/output stream library
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Initialize the array with specific values

    // Output: Printing the elements of the array
    cout << "Array elements are:\n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Print each element followed by a space
    }

    return 0;  // Indicate that the program ended successfully
}
