/* 
    Topic: Matrix Multiplication
    - Matrix Multiplication Rule:
        If A is (m × n) and B is (n × p), then C will be (m × p).
        Formula:
            C[i][j] = sum over k=0 to n-1 of ( A[i][k] * B[k][j] )
*/

#include <stdio.h>

int main() {
    int a[2][2] = {
        {1,2},
        {3,4}
    };
    int b[2][2] = {
        {5,6},
        {7,8}
    };
    int prod[2][2] = {0};

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            for(int k=0;k<2;k++)
                prod[i][j] += a[i][k] * b[k][j];

    printf("Matrix Product:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) {
            printf("%d\t", prod[i][j]);
        } 
        printf("\n");
    }
    return 0;
}

/*
Output:
Matrix Product:
19      22
43      50
*/