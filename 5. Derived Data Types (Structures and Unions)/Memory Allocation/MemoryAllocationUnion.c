#include <stdio.h>

// Define a union with different data types
union MyUnion {
    char c;        // 1 byte
    int i;         // 4 bytes
    float f;       // 4 bytes
};

int main() {
    union MyUnion u;

    printf("Size of char (c): %lu bytes\n", sizeof(u.c));
    printf("Size of int (i): %lu bytes\n", sizeof(u.i));
    printf("Size of float (f): %lu bytes\n", sizeof(u.f));
    printf("Total size of union (MyUnion): %lu bytes\n", sizeof(u));

    return 0;
}

/*
| Shared Memory (4 bytes, used by either char, int, or float) |
The total size of the union is 4 bytes, regardless of how many members it has.
When you assign a value to one member, it overwrites the value of the other members because they occupy the same memory space.

*/
