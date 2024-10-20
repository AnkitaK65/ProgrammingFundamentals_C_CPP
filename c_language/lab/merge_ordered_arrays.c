//WAP to Merge two ordered arrays into one ordered array.

#include <stdio.h>  // Include input/output stream library

// Function to merge two sorted arrays
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {
    int i = 0, j = 0, k = 0;

    // Merge both arrays while there are elements in both
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1[], if any
    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2[], if any
    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }
}

int main() {
    int size1, size2;

    // Input: Asking user for the size and elements of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements (sorted) for the first array:\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input: Asking user for the size and elements of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d elements (sorted) for the second array:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merged array to store the result
    int mergedArray[size1 + size2];

    // Call function to merge the two arrays
    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    // Output: Print the merged array
    printf("Merged ordered array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}
