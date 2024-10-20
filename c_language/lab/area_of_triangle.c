/*
Question: Write a C program to calculate the area of a triangle.
*/

#include <stdio.h>

int main() {
    float base, height, area;  // Declare variables for base, height, and area

    // Input: Asking user to enter the base and height of the triangle
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);  // Reads base value from user

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);  // Reads height value from user

    // Calculation: Formula for area of triangle (Area = 1/2 * base * height)
    area = 0.5 * base * height;

    // Output: Display the calculated area
    printf("The area of the triangle is: %.2f\n", area);  // Prints the result with 2 decimal places

    return 0;  // Indicate that the program ended successfully
}
