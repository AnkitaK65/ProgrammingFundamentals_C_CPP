// Topic: Array of Nested Structures
// Example: Student with Address

#include <stdio.h>

// Define Address structure
struct Address {
    char city[50];
    int pinCode;
};

// Define Student structure with Address as a member
struct Student {
    char name[50];
    int rollNumber;
    struct Address address;
};

int main() {
    // Initialize array of Students with nested Address structure
    struct Student students[2] = {
        {"Alice", 101, {"New York", 10001}},
        {"Bob", 102, {"Los Angeles", 90001}}
    };

    // Display the details of each student
    for (int i = 0; i < 2; i++) {
        printf("Student %d: Name: %s, Roll Number: %d, City: %s, Pin Code: %d\n",
            i + 1, students[i].name, students[i].rollNumber, students[i].address.city, students[i].address.pinCode);
    }

    return 0;
}
/*
Student 1: Name: Alice, Roll Number: 101, City: New York, Pin Code: 10001
Student 2: Name: Bob, Roll Number: 102, City: Los Angeles, Pin Code: 90001
*/