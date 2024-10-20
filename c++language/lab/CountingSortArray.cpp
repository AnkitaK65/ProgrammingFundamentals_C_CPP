/*
Linear Sort (Counting Sort) Algorithm:
1. Determines the range of the input values (i.e., the maximum and minimum).
2. Creates a counting array of the size equal to the range of the input values.
3. Counts the occurrences of each input value and stores these counts in the counting array.
4. Modifies the counting array to hold the cumulative counts to determine the final position of each element.
5. Constructs the sorted output array based on the counts in the counting array.
6. Copies the sorted elements back to the original array.
*/


#include <iostream>

#define MAX_VALUE 100 // Define the maximum value for input

void countingSort(int arr[], int size) {
    int count[MAX_VALUE + 1] = {0}; // Initialize counting array
    int output[size]; // Output array to store sorted elements

    // Count the occurrences of each number in the input array
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // Build the output array based on counts
    for (int i = 0, j = 0; i <= MAX_VALUE; i++) {
        while (count[i] > 0) {
            output[j++] = i;
            count[i]--;
        }
    }

    // Copy the sorted output back to the original array
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    countingSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
