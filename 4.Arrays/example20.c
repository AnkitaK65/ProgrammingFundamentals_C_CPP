/* 
    Topic: Multi-Dimensional Array (3D Example)
    Displaying in block (layer-wise) format
*/

#include <stdio.h>

int main() {
    int arr[2][2][2] = {
        { {1,2}, {3,4} },
        { {5,6}, {7,8} }
    };

    // Print each 2D "layer"
    for (int i = 0; i < 2; i++) { // 1st dimension (layer / block)
        printf("Layer %d:\n", i);
        for (int j = 0; j < 2; j++) { // row
            for (int k = 0; k < 2; k++) { // col
                printf("%d ", arr[i][j][k]);
            }
            printf("\n"); // new row
        }
        printf("\n"); // separate layers
    }

    return 0;
}

/*
Output:
Layer 0:
1 2 
3 4 

Layer 1:
5 6 
7 8
*/