/* 
    Topic: Out-of-Bounds Array Access
    Accessing outside valid range is UNDEFINED BEHAVIOR.
*/

#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};

    printf("arr[10] = %d (undefined behavior!)\n", arr[10]);
    return 0;
}

/*
Output:
arr[10] = -2030490728 (undefined behavior!)
*/