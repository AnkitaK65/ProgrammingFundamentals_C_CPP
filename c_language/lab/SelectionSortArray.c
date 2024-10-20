/*
Selection Sort Algorithm:
1. Divides the array into two parts: sorted and unsorted.
2. Repeatedly selects the smallest (or largest) element from the unsorted part.
3. Swaps it with the leftmost unsorted element, moving the boundary of the sorted and unsorted parts one element to the right.
4. This process is repeated until the entire array is sorted.
*/

#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    // Step 1: Traverse through all elements
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Step 2: Assume the minimum is the first element

        // Step 3: Find the index of the minimum element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Step 4: Swap the found minimum element with the first element
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
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    selectionSort(arr, n);

    // Print the sorted array
    printf("Sorted array (Selection Sort):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
