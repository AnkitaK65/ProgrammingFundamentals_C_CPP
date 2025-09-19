/* 
    Topic: Declaring and Defining a 1D Array in C
*/

#include <stdio.h>

int main() {
    int arr[5]; // Declaration: an array of 5 integers
    // Definition + Memory allocated
    /*
    In C language, when you write int arr[5];:
    It is both a declaration and a definition.

    Declaration -: you tell the compiler arr exists and it is an array of integers
    Definition -: space in memory is actually reserved for 5 integers.
    */
    printf("Array declared with size 5 (uninitialized).\n");
    return 0;
}

/*
Output:
Array declared with size 5 (uninitialized).
*/