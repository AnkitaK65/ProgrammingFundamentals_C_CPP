//WAP to Merge two ordered arrays into one ordered array.

#include <iostream>  // Include input/output stream library
using namespace std;

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
    cout << "Enter the size of the first array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter " << size1 << " elements (sorted) for the first array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    // Input: Asking user for the size and elements of the second array
    cout << "Enter the size of the second array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter " << size2 << " elements (sorted) for the second array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    // Merged array to store the result
    int mergedArray[size1 + size2];

    // Call function to merge the two arrays
    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    // Output: Print the merged array
    cout << "Merged ordered array:\n";
    for (int i = 0; i < size1 + size2; i++) {
        cout << mergedArray[i] << " ";
    }

    return 0;
}
