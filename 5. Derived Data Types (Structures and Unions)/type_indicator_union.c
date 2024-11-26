#include <stdio.h>

// Define the structure for a Rectangle
struct Rectangle {
    float length;
    float width;
};

// Define the structure for a Circle
struct Circle {
    float radius;
};

// Define a union that can hold either a Rectangle or a Circle
union Shape {
    struct Rectangle rect; // Rectangle member
    struct Circle circ;    // Circle member
};

// Define an enum to track the type of shape stored in the union
enum ShapeType { RECTANGLE, CIRCLE };

// Define a structure to hold both the union and its type indicator
struct ShapeInfo {
    union Shape shape;       // Union to store the shape data
    enum ShapeType type;     // Type indicator to track active union member
};

int main() {
    struct ShapeInfo shape1; // Declare a ShapeInfo variable

    // Store Rectangle data and set the type indicator
    shape1.shape.rect.length = 5.0;
    shape1.shape.rect.width = 3.0;
    shape1.type = RECTANGLE; // Indicate the active shape is a Rectangle

    // Check which shape is in use and print the appropriate data
    if (shape1.type == RECTANGLE) {
        printf("Rectangle: Length = %.2f, Width = %.2f\n", 
            shape1.shape.rect.length, shape1.shape.rect.width);
    }

    // Store Circle data and set the type indicator
    shape1.shape.circ.radius = 7.5;
    shape1.type = CIRCLE; // Indicate the active shape is a Circle

    // Check which shape is in use and print the appropriate data
    if (shape1.type == CIRCLE) {
        printf("Circle: Radius = %.2f\n", shape1.shape.circ.radius);
    }

    return 0; // Exit the program
}
/*
Rectangle: Length = 5.00, Width = 3.00
Circle: Radius = 7.50
*/
