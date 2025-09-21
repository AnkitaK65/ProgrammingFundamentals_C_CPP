/* 
    Topic: Various Ways of Initializing an Array
*/

#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};   // Full initialization
    int arr2[5] = {10, 20};          // Partial initialization, rest = 0
    int arr3[5] = {0};               // All elements 0
    int arr4[5] = {10};             // Only first element is 10, rest are 0
    int arr5[]  = {5, 10, 15};       // Size inferred
    
    //Invalid in Standard C → array not yet defined, assignments not allowed.
    //Valid in C99 and later → this is called a designated initializer.
    //All other unspecified elements are automatically initialized to 0.
    int arr6[5] = { [0] = 1, [3] = 10 };


    printf("arr1[0] = %d, arr1[4] = %d\n", arr1[0], arr1[4]);
    printf("arr2[2] = %d (auto 0)\n", arr2[2]);
    printf("arr3[3] = %d (all zero)\n", arr3[3]);
    printf("arr4[0] = %d, arr4[3] =%d\n", arr4[0], arr4[3]);
    printf("arr5 has size = %d elements\n", sizeof(arr5)/sizeof(arr5[0]));
    printf("arr6[0] = %d, arr6[2] = %d, arr6[3] = %d\n", arr6[0], arr6[2], arr6[3]);
    return 0;
}

/*
Output:
arr1[0] = 1, arr1[4] = 5
arr2[2] = 0 (auto 0)
arr3[3] = 0 (all zero)
arr4[0] = 10, arr4[3] =0
arr5 has size = 3 elements
arr6[0] = 1, arr6[2] = 0, arr6[3] = 10
*/