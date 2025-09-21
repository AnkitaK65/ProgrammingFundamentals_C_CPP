/* 
    Topic: Declaring and Initializing a 2D Array
*/

#include <stdio.h>

int main() {
    int matrix[2][3] = { {1,2,3}, {4,5,6} };

    printf("matrix[1][2] = %d\n", matrix[1][2]);
    return 0;
}

/*
Output:
matrix[1][2] = 6
*/