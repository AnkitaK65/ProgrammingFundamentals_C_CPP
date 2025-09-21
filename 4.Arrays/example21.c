/* 
    Topic: Matrix Addition
        C[i][j]=A[i][j]+B[i][j]
*/

#include <stdio.h>

int main() {
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{5,6},{7,8}};
    int sum[2][2];

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Matrix Sum:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
Output:
Matrix Sum:
6       8
10      12
*/
