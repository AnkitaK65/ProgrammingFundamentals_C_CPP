// Topic: Modifying Multiple Members using Pointers

#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

// Function to update both length and width
void resizeRectangle(struct Rectangle *rect, int newLength, int newWidth) {
    rect->length = newLength;
    rect->width = newWidth;
}

int main() {
    struct Rectangle rect = {10, 5};

    // Displaying before resize
    printf("Before resize: Length = %d, Width = %d\n", rect.length, rect.width);

    // Passing by reference to modify the members
    resizeRectangle(&rect, 20, 15);

    // Displaying after resize
    printf("After resize: Length = %d, Width = %d\n", rect.length, rect.width);

    return 0;
}
/*
Before resize: Length = 10, Width = 5
After resize: Length = 20, Width = 15
*/