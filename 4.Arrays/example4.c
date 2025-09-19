/* 
    Topic: Accessing Array Elements Individually and using Loops
*/

#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};

    // Access individually
    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr[1]);
    printf("arr[2] = %d\n", arr[2]);

    // Access using loop
    for (int i = 0; i < 3; i++) {
        printf("Loop arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

/*
Output:
arr[0] = 10
arr[1] = 20
arr[2] = 30
Loop arr[0] = 10
Loop arr[1] = 20
Loop arr[2] = 30
*/