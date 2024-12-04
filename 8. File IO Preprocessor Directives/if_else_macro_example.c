// Filename: Multiline Macro with if-else block

#include <stdio.h>

// Multiline macro for checking if a number is positive, negative, or zero
#define CHECK_NUMBER(num)                \
    ({                                   \
        if (num > 0) {                   \
            printf("%d is positive.\n", num); \
        } else if (num < 0) {            \
            printf("%d is negative.\n", num); \
        } else {                          \
            printf("%d is zero.\n", num);   \
        }                                  \
    })

int main() {
    int num1 = 5, num2 = -3, num3 = 0;

    // Using the CHECK_NUMBER macro to check different numbers
    CHECK_NUMBER(num1);  // Expected output: 5 is positive.
    CHECK_NUMBER(num2);  // Expected output: -3 is negative.
    CHECK_NUMBER(num3);  // Expected output: 0 is zero.

    return 0;
}
// 5 is positive.
// -3 is negative.
// 0 is zero.