/* 
    Topic: Working with Rows and Columns
    Concept of Matrix
*/

#include <stdio.h>

int main() {
    int matrix[2][3] = { {1,2,3}, {4,5,6} };

    printf("Row 1: %d %d %d\n", matrix[0][0], matrix[0][1], matrix[0][2]);
    printf("Row 2: %d %d %d\n", matrix[1][0], matrix[1][1], matrix[1][2]);
    return 0;
}

/*
Output:
Row 1: 1 2 3
Row 2: 4 5 6
*/
