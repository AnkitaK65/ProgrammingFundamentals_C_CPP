#include <stdio.h>

// Define a structure with different data types
struct MyStruct {
    char c;        // 1 byte
    int i;         // 4 bytes
    float f;       // 4 bytes
};

int main() {
    struct MyStruct s;

    printf("Size of char (c): %lu bytes\n", sizeof(s.c));
    printf("Size of int (i): %lu bytes\n", sizeof(s.i));
    printf("Size of float (f): %lu bytes\n", sizeof(s.f));
    printf("Total size of structure (MyStruct): %lu bytes\n", sizeof(s));

    return 0;
}

/*
Total size = 1 + 4 + 4 = 9 bytes. However, due to memory alignment (padding), the actual size of the structure is 12 bytes.
Padding is added by the compiler to align data in memory for faster access.
Memory Layout of MyStruct:
| char c (1 byte) | padding (3 bytes) | int i (4 bytes) | float f (4 bytes) |
*/