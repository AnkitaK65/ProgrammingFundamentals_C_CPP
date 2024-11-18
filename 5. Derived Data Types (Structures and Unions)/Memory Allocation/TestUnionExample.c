#include <stdio.h>

union TestUnion {
    int i;      // 4 bytes
    float f;    // 4 bytes
    char c[4];  // 4 bytes (character array of size 4)
};

int main() {
    union TestUnion u;

    u.i = 65;
    printf("Integer: %d\n", u.i);
    printf("Float: %f\n", u.f);
    printf("Character array: %c %c %c %c\n", u.c[0], u.c[1], u.c[2], u.c[3]);

    u.f = 3.14;
    printf("\nAfter assigning float:\n");
    printf("Integer: %d\n", u.i);
    printf("Float: %f\n", u.f);
    printf("Character array: %c %c %c %c\n", u.c[0], u.c[1], u.c[2], u.c[3]);

    return 0;
}

//The float value 3.14 has a specific binary representation in memory, which depends on the IEEE 754 standard for floating-point numbers.
//The integer interpretation of these bytes yielding 1078523331. The character array (u.c) shows non-printable characters due to the raw binary data being interpreted as ASCII values.

