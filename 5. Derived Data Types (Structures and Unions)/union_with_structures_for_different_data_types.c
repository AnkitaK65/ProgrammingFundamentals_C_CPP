// Topic: Using Union with Structures for Different Data Types

#include <stdio.h>

// Define a structure for Rectangle
struct Rectangle {
    float length;
    float width;
};

// Define a structure for Circle
struct Circle {
    float radius;
};

// Define a union with both structures
union Shape {
    struct Rectangle rect;
    struct Circle circ;
};

int main() {
    // Declare a union variable
    union Shape shape;

    // Storing rectangle dimensions
    shape.rect.length = 5.0;
    shape.rect.width = 3.0;

    // Print rectangle details
    printf("Rectangle: Length = %.2f, Width = %.2f\n", shape.rect.length, shape.rect.width);

    // Now, store circle's radius (overwrites rectangle data)
    shape.circ.radius = 7.5;

    // Print circle details
    printf("Circle: Radius = %.2f\n", shape.circ.radius);

    return 0;
}
/*
Rectangle: Length = 5.00, Width = 3.00
Circle: Radius = 7.50
*/