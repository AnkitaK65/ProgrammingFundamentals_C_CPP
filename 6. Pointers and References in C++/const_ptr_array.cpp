// Topic: Passing Arrays as Constant Pointers

#include <iostream>
using namespace std;

// Function to print array elements without modification
void printArray(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  // Using array indexing to access each element
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate array size

    printArray(arr, size);  // Passing array to function

    return 0;
}
// 10 20 30 40 50 