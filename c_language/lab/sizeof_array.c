// WAP to demonstrate the use of sizeof() by passing an array to a function.

#include <stdio.h>  // Include input/output stream library

// Function to modify the second element of the array
void modifyArray(int arr[], int size) {
    printf("Array inside the function before modification:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Modify the second element of the array
    if (size > 1) {
        arr[1] = 99;  // Modify the second element
    }

    printf("Array inside the function after modification:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Declare and initialize an array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate size of the array

    printf("Array in main() before calling the function:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the function and pass the array
    modifyArray(arr, size);

    printf("Array in main() after calling the function:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
