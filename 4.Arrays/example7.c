/* 
    Topic: Printing Array without Index
*/

#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};

    // Different ways to print addresses
    printf("Using Array name arr                        (arr)       : %p\n", arr);
    printf("Using address of element 0 (1st element)    (&arr[0])   : %p\n", &arr[0]);
    printf("Using address of the whole array            (&arr)      : %p\n", &arr);

    return 0;
}

/*
OUTPUT:
Using Array name arr                        (arr)       : 0x16fdfed80
Using address of element 0 (1st element)    (&arr[0])   : 0x16fdfed80
Using address of the whole array            (&arr)      : 0x16fdfed80
*/