#include <stdio.h>

// Define a structure with potential alignment and padding issues
struct A {
    char a;   // 1-byte character
    int b;    // 4-byte integer (typically requires 4-byte alignment)
};

// Define a union that includes the structure and another type
union B {
    struct A a;  // Structure with alignment and padding
    float f;     // 4-byte floating-point number
};

int main() {
    // Print the sizes of the structure and the union
    printf("Size of struct A: %lu bytes\n", sizeof(struct A));
    printf("Size of union B: %lu bytes\n", sizeof(union B));

    return 0;
}

/*
 * Definitions:
 * Alignment:
 * - Refers to how data is arranged and accessed in memory.
 * - Many data types must start at specific memory addresses (boundaries) to ensure efficient access.
 * - For example, on most systems, an `int` requires alignment to a 4-byte boundary.

 * Padding:
 * - Extra unused bytes added to ensure proper alignment of data members in structures.
 * - Padding increases the size of a structure but ensures members are stored in properly aligned memory locations.

 * Notes:
 * - In the example, `struct A` contains a `char` and an `int`.
 * - To align the `int`, the compiler adds padding bytes after the `char`.
 * - The size of `union B` is determined by the largest member, which is `struct A` (including padding).
 */

/*
Output:
Size of struct A: 8 bytes
Size of union B: 8 bytes
*/