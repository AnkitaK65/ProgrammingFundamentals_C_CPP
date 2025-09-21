/* 
    Topic: Variable Size 2D Array in C
    - (A C99 feature) - Varies in different C programming language standard
    - VLAs(Variable Length Arrays) are not a part of the C++ standard.
*/

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and cols: ");
    scanf("%d%d", &rows, &cols);

    int arr[rows][cols]; // Variable length 2D array

    for (int i=0;i<rows;i++)
        for (int j=0;j<cols;j++)
            arr[i][j] = i+j;

    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
Output:
Enter rows and cols: 2 3
0 1 2 
1 2 3
*/