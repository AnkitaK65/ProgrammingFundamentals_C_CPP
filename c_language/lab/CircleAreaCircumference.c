#include <stdio.h>

// Function to compute area and circumference
void computeCircleProperties(float radius, float *area, float *circumference) {
    *area = 3.14159 * radius * radius;          // Area = π * r^2
    *circumference = 2 * 3.14159 * radius;     // Circumference = 2 * π * r
}

/*
Question:
Write a program which takes the radius of a circle as input from the user, 
passes it to another function that computes the area and the circumference of the circle 
and displays the value of area and circumference from the main() function.
*/

int main() {
    float radius, area, circumference;

    // Ask the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Call the function to compute area and circumference
    computeCircleProperties(radius, &area, &circumference);

    // Display the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
