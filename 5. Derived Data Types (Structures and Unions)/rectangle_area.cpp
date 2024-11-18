#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
};

// Function to calculate area
int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    Rectangle rect = {10, 5};

    // Passing members of the structure to the function
    int area = calculateArea(rect.length, rect.width);
    cout << "Area of the Rectangle: " << area << endl;

    // Modifying members directly
    rect.length = 15;
    rect.width = 7;
    cout << "New Area of the Rectangle: " << calculateArea(rect.length, rect.width) << endl;

    return 0;
}

/*
Area of the Rectangle: 50
New Area of the Rectangle: 105
*/