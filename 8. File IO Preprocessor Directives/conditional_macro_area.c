/*
   Question: Conditional Compilation and Macros in C

   Write a C program to define a macro for calculating the **area of a rectangle** 
   and the **area of a circle**. Use conditional compilation to include the code 
   for calculating only one area based on a preprocessor directive.

   Requirements:
   1. Define macros:
      - RECT_AREA(length, breadth): Calculate area of a rectangle.
      - CIRCLE_AREA(radius): Calculate area of a circle using PI = 3.14.
   2. Use preprocessor directive `#define SHAPE RECTANGLE` or `#define SHAPE CIRCLE` 
      to control which area is calculated.
   3. Prompt the user to input appropriate values and calculate the area.

   Example Output:
   For `#define SHAPE RECTANGLE`:
      Enter length and breadth of the rectangle: 
      5 10
      The area of the rectangle is: 50.00
   
   For `#define SHAPE CIRCLE`:
      Enter radius of the circle: 
      7
      The area of the circle is: 153.86
*/

#include <stdio.h>

// Macro Definitions
#define PI 3.14
#define RECT_AREA(length, breadth) ((length) * (breadth))
#define CIRCLE_AREA(radius) (PI * (radius) * (radius))

// Define SHAPE: Uncomment one of the following lines to switch between RECTANGLE and CIRCLE
// #define RECTANGLE
#define CIRCLE

int main() {
    #ifdef RECTANGLE
        double length, breadth;
        printf("Enter length and breadth of the rectangle: ");
        scanf("%lf %lf", &length, &breadth);
        printf("The area of the rectangle is: %.2f\n", RECT_AREA(length, breadth));
    #elif defined(CIRCLE)
        double radius;
        printf("Enter radius of the circle: ");
        scanf("%lf", &radius);
        printf("The area of the circle is: %.2f\n", CIRCLE_AREA(radius));
    #else
        printf("No valid SHAPE is defined. Define either RECTANGLE or CIRCLE.\n");
    #endif
    return 0;
}

//When RECTANGLE IS DEFINED
// Enter length and breadth of the rectangle: 4 5
// The area of the rectangle is: 20.00

//When CIRCLE IS DEFINED
// Enter radius of the circle: 6
// The area of the circle is: 113.04