// WAP to Calculate the Area of a Triangle using Heron's Formula in C
#include <stdio.h>
#include <math.h> // Required for sqrt function

int main() {
    float a, b, c, s, area;

    // Input the lengths of the triangle sides
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the semi-perimeter
    s = (a + b + c) / 2;

    // Apply Heron's formula to calculate the area
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output the area of the triangle
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
