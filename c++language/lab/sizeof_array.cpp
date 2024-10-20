// WAP to demonstrate the use of sizeof() by passing an array to a function.

#include <iostream>  // Include input/output stream library
using namespace std;

// Function to modify the second element of the array
void modifyArray(int arr[], int size) {
    cout << "Array inside the function before modification:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Modify the second element of the array
    if (size > 1) {
        arr[1] = 99;  // Modify the second element
    }

    cout << "Array inside the function after modification:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Declare and initialize an array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate size of the array

    cout << "Array in main() before calling the function:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the function and pass the array
    modifyArray(arr, size);

    cout << "Array in main() after calling the function:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
