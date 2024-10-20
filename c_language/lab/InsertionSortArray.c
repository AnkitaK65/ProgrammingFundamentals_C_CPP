/*
Insertion Sort Algorithm:
1. Builds a sorted portion of the array one element at a time.
2. Takes each element from the unsorted part and finds the appropriate position in the sorted part.
3. Shifts elements in the sorted part to the right to make space for the new element.
4. This process is repeated until the entire array is sorted.
*/


#include <stdio.h>

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    // Step 1: Traverse through 1 to n
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Step 2: Current element to be compared
        int j = i - 1;

        // Step 3: Move elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Step 4: Place key in its correct position
    }
}

int main() {
    int n;

    // Ask for array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    insertionSort(arr, n);

    // Print the sorted array
    printf("Sorted array (Insertion Sort):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
