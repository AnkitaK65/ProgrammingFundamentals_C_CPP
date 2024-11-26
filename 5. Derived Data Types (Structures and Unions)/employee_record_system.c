// Topic: Structure with Union

#include <stdio.h>

// Define a union for employee compensation
union Compensation {
    float hourlyWage;
    float salary;
};

// Define a structure for employee
struct Employee {
    char name[50];
    char type; // 'H' for hourly, 'S' for salaried
    union Compensation comp;
};

int main() {
    struct Employee emp1 = {"John Doe", 'H', .comp.hourlyWage = 15.50};
    struct Employee emp2 = {"Jane Smith", 'S', .comp.salary = 75000.00};

    if (emp1.type == 'H') {
        printf("Employee: %s, Hourly Wage: $%.2f\n", emp1.name, emp1.comp.hourlyWage);
    }

    if (emp2.type == 'S') {
        printf("Employee: %s, Salary: $%.2f\n", emp2.name, emp2.comp.salary);
    }

    return 0;
}
/*
Employee: John Doe, Hourly Wage: $15.50
Employee: Jane Smith, Salary: $75000.00
*/