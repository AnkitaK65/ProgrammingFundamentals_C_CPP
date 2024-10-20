/*
Insertion Sort Algorithm:
1. Builds a sorted portion of the array one element at a time.
2. Takes each element from the unsorted part and finds the appropriate position in the sorted part.
3. Shifts elements in the sorted part to the right to make space for the new element.
4. This process is repeated until the entire array is sorted.
*/


#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Current element to be compared
        int j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Place key in its correct position
    }
}

int main() {
    int n;

    // Ask for array size
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input the array elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    insertionSort(arr, n);

    // Print the sorted array
    cout << "Sorted array (Insertion Sort):" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
