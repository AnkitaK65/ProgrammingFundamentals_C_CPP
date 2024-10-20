/*
Selection Sort Algorithm:
1. Divides the array into two parts: sorted and unsorted.
2. Repeatedly selects the smallest (or largest) element from the unsorted part.
3. Swaps it with the leftmost unsorted element, moving the boundary of the sorted and unsorted parts one element to the right.
4. This process is repeated until the entire array is sorted.
*/

#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the minimum is the first element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Find the minimum element's index
            }
        }
        // Swap the found minimum element with the first element
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
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
    selectionSort(arr, n);

    // Print the sorted array
    cout << "Sorted array (Selection Sort):" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
