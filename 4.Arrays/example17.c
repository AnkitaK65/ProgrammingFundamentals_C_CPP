/* 
    Topic: Accessing and Manipulating Specific Elements in 2D Array
*/

#include <stdio.h>

int main() {
    int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

    // Accessing a specific element
    printf("Original element at row 2 col 3 = %d\n", arr[1][2]);

    // Manipulating (changing) a specific element
    arr[1][2] = 99;   // change value at row 2 col 3

    // Access again to confirm change
    printf("Updated element at row 2 col 3 = %d\n", arr[1][2]);

    // Another example: increase element at row 3 col 1 by 10
    arr[2][0] += 10;
    printf("Row 3 col 1 after adding 10 = %d\n", arr[2][0]);

    return 0;
}

/*
Output:
Original element at row 2 col 3 = 6
Updated element at row 2 col 3 = 99
Row 3 col 1 after adding 10 = 17
*/