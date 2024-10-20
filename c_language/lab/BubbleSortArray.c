#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    
    // Ask for array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort the array
    bubbleSort(arr, n);
    
    // Print the sorted array
    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
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