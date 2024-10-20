#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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
    bubbleSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Bubble Sort Algorithm:
1. Compares adjacent elements in the array.
2. Swaps them if they are in the wrong order.
3. Continues this process for each element in the array, pushing the largest unsorted element to the end of the array in each pass.
4. This is repeated until the entire array is sorted.
*/