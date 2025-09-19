/* 
    Topic: Array Initialization using Loop
*/

#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10; // Assign values using loop
    }

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

/*
Output:
arr[0] = 0
arr[1] = 10
arr[2] = 20
arr[3] = 30
arr[4] = 40
*/