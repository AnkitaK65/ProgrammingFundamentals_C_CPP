/*
Quick Sort Algorithm:
1. Selects a 'pivot' element from the array.
2. Partitions the other elements into two sub-arrays according to whether they are less than or greater than the pivot.
3. Recursively applies the same logic to the sub-arrays.
4. The base case for the recursion is when the sub-array has one or zero elements, which are already sorted.
*/


#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }

    // Swap the pivot element with the element at index i+1
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partitioning index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
    quickSort(arr, 0, n - 1);

    // Print the sorted array
    cout << "Sorted array (Quick Sort):" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
