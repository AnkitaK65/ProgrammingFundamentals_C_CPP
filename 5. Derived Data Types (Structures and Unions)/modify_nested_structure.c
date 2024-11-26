// Topic: Modifying Nested Structure Members

#include <stdio.h>

// Define the inner structure
struct Date {
    int day;
    int month;
    int year;
};

// Define the outer structure
struct Event {
    char eventName[50];
    struct Date eventDate;
};

int main() {
    struct Event workshop;

    // Input details
    printf("Enter event name: ");
    scanf("%s", workshop.eventName); // Read event name
    printf("Enter event date (dd mm yyyy): ");
    scanf("%d %d %d", &workshop.eventDate.day, &workshop.eventDate.month, &workshop.eventDate.year); // Read date

    // Display details
    printf("\nEvent: %s\n", workshop.eventName);
    printf("Date: %02d-%02d-%d\n", workshop.eventDate.day, workshop.eventDate.month, workshop.eventDate.year);

    return 0;
}

/*
Enter event name: Workshop
Enter event date (dd mm yyyy): 20 05 2025

Event: Workshop
Date: 20-05-2025
*/
