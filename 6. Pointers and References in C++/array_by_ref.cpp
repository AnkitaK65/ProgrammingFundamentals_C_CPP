// Topic: Passing Arrays by Reference

#include <iostream>
using namespace std;

// Function to modify the array elements by reference
void modifyArray(int (&arr)[5]) {  // The array size is specified here
    for (int i = 0; i < 5; i++) {
        arr[i] = arr[i] * 2;  // Modify elements in the array
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Before modification: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    modifyArray(arr);  // Passing the entire array to the function

    cout << "After modification: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// Before modification: 1 2 3 4 5 
// After modification: 2 4 6 8 10 