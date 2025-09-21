/* 
    Topic: Manipulating 2D Arrays
    Example: Increment each element by 10
*/

#include <stdio.h>

int main() {
    int arr[2][2] = { {1,2}, {3,4} };

    for (int i=0;i<2;i++)
        for (int j=0;j<2;j++)
            arr[i][j] += 10;

    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
Output:
11 12 
13 14
*/
