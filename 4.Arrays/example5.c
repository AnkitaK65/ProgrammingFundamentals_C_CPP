/* 
    Topic: Manipulating Array Elements
*/

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Double each element using loop
    for (int i = 0; i < 5; i++) {
        arr[i] *= 2;
    }

    // Manipulate arr[2] separately (add 20)
    arr[2] += 20;

    // Step 3: Print updated array
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

/*
Output:
arr[0] = 2
arr[1] = 4
arr[2] = 26
arr[3] = 8
arr[4] = 10
*/
