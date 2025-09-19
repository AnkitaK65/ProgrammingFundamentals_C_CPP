/* 
    Topic: What Happens if Array is Not Initialized
    In C, local uninitialized arrays have "garbage values".
*/

#include <stdio.h>

int main() {
    int arr[5]; // Not initialized

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d (garbage)\n", i, arr[i]);
    }
    return 0;
}

/*
Output:
arr[0] = 268435455 (garbage)
arr[1] = 1876946488 (garbage)
arr[2] = 1 (garbage)
arr[3] = -184254440 (garbage)
arr[4] = 1 (garbage)
*/