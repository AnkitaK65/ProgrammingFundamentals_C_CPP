/* 
    Topic: Calculating Size of Array
*/

#include <stdio.h>

int main() {
    int arr[10];

    int totalBytes = sizeof(arr);        // total memory taken by array
    int oneElement = sizeof(arr[0]);     // size of one element
    int size = totalBytes / oneElement;  // number of elements

    printf("sizeof(arr)   = %d bytes\n", totalBytes);
    printf("sizeof(arr[0])= %d bytes\n", oneElement);
    printf("Array size    = %d elements\n", size);

    return 0;
}

/*
Output:
sizeof(arr)   = 40 bytes
sizeof(arr[0])= 4 bytes
Array size    = 10 elements
*/