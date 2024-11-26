// Topic: Structure with Union as a Member

#include <stdio.h>

// Define a union
union Value {
    int intValue;
    float floatValue;
    char charValue;
};

// Define a structure containing the union
struct Data {
    char type;
    union Value val;
};

int main() {
    struct Data data;

    // Using the structure to store an integer value
    data.type = 'i';
    data.val.intValue = 42;
    printf("Type: %c, Integer Value: %d\n", data.type, data.val.intValue);

    // Using the structure to store a float value
    data.type = 'f';
    data.val.floatValue = 3.14;
    printf("Type: %c, Float Value: %.2f\n", data.type, data.val.floatValue);

    // Using the structure to store a character value
    data.type = 'c';
    data.val.charValue = 'A';
    printf("Type: %c, Character Value: %c\n", data.type, data.val.charValue);

    return 0;
}
/*
Type: i, Integer Value: 42
Type: f, Float Value: 3.14
Type: c, Character Value: A
*/