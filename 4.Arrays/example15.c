/* 
    Topic: Input and Output using Nested Loops
*/

#include <stdio.h>

int main() {
    int arr[2][2];

    printf("Enter 4 elements:\n");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix:\n");
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
Enter 4 elements:
10 20 30 40
Matrix:
10 20 
30 40
*/