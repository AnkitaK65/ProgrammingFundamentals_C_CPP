// Topic: Passing Arrays to Functions Using Pointers

#include <iostream>
using namespace std;

void modifyArray(int *arr, int size) {
    // Modifying array elements using pointer notation
    for (int i = 0; i < size; i++) {
        *(arr + i) = *(arr + i) * 2;  // Doubling each element
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before modification: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Passing array to function
    modifyArray(arr, size);

    cout << "After modification: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// Before modification: 1 2 3 4 5 
// After modification: 2 4 6 8 10 