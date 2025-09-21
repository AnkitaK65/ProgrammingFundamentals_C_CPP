/* 
    Topic: Real-world Example – Temperature Data
    Rows = Cities, Cols = Days
*/

#include <stdio.h>

int main() {
    int temp[2][3] = { {30, 32, 31}, {28, 29, 27} };
    char *cities[2] = {"City 1", "City 2"};
    char *days[3]   = {"Day 1", "Day 2", "Day 3"};

    // Print header row
    printf("Temperature Data (in °C):\n");
    printf("City\t\t");
    for(int j=0; j<3; j++) {
        printf("%s\t", days[j]);
    }
    printf("\n--------------------------------------\n");

    // Print temperature table
    for(int i=0; i<2; i++) {
        printf("%s\t\t", cities[i]);
        for(int j=0; j<3; j++) {
            printf("%d\t", temp[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Output:
Temperature Data (in °C):
City            Day 1   Day 2   Day 3
--------------------------------------
City 1          30      32      31
City 2          28      29      27
*/