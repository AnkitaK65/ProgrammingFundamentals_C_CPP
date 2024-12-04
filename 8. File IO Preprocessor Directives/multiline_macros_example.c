// Topic: Multiline Macros

#include <stdio.h>

// Multiline macro for calculating the area of a rectangle
#define RECTANGLE_AREA(length, width)      \
    ({                                      \
        int area = (length) * (width);      \
        area;                               \
    })

// Multiline macro for finding the maximum of two values
#define MAX(x, y)                         \
    ({                                    \
        int _x = (x);                     \
        int _y = (y);                     \
        (_x > _y) ? _x : _y;              \
    })

int main() {
    int length = 5, width = 3;
    int area = RECTANGLE_AREA(length, width);
    printf("Area of the rectangle: %d\n", area);

    int a = 10, b = 20;
    int max_value = MAX(a, b);
    printf("Maximum value: %d\n", max_value);

    return 0;
}
// Area of the rectangle: 15
// Maximum value: 20