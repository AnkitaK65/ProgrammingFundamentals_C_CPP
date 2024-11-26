#include <stdio.h>
#include <string.h>

// Define a structure for Employee
struct Employee {
    char name[50];
    int employeeID;
    float salary;
};

// Define a structure for Product
struct Product {
    char productName[50];
    int productID;
    float price;
};

// Define a union containing both structures
union Data {
    struct Employee emp;
    struct Product prod;
};

int main() {
    // Declare a union variable
    union Data data;

    // Store employee details in the union
    data.emp.employeeID = 101;
    data.emp.salary = 50000.50;
    // Using strcpy to copy string to name
    strcpy(data.emp.name, "John Doe");

    // Print employee details
    printf("Employee Details:\n");
    printf("ID: %d\n", data.emp.employeeID);
    printf("Salary: %.2f\n", data.emp.salary);
    printf("Name: %s\n", data.emp.name);

    // Store product details in the union (overwrites the employee details)
    data.prod.productID = 2001;
    data.prod.price = 150.75;
    // Using strcpy to copy string to productName
    strcpy(data.prod.productName, "Laptop");

    // Print product details
    printf("\nProduct Details:\n");
    printf("ID: %d\n", data.prod.productID);
    printf("Price: %.2f\n", data.prod.price);
    printf("Name: %s\n", data.prod.productName);

    return 0;
}
/*
Employee Details:
ID: 101
Salary: 50000.50
Name: John Doe

Product Details:
ID: 2001
Price: 150.75
Name: Laptop
*/