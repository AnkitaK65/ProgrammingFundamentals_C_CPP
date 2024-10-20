#include <iostream>
using namespace std;

// Function to compute area and circumference
void computeCircleProperties(float radius, float &area, float &circumference) {
    area = 3.14159 * radius * radius;           // Area = π * r^2
    circumference = 2 * 3.14159 * radius;      // Circumference = 2 * π * r
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
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Call the function to compute area and circumference
    computeCircleProperties(radius, area, circumference);

    // Display the results
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}
