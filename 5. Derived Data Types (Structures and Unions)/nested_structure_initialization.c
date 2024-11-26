// Topic: Initialization of Nested Structures

#include <stdio.h>

// Define the nested structure for Address
struct Address {
    char street[50];
    char city[50];
    int zipCode;
};

// Define the main structure for Person
struct Person {
    char name[50];
    struct Address address; // Nested structure
};

int main() {
    // Direct initialization of the nested structure
    struct Person person = {"John", {"Maple Street", "New York", 10001}};

    // Display the person's information
    printf("Name: %s\n", person.name);
    printf("Address: %s, %s, %d\n", person.address.street, person.address.city, person.address.zipCode);

    return 0;
}
/*
Name: John
Address: Maple Street, New York, 10001
*/