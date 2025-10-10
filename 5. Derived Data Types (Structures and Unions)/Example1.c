#include <stdio.h>
#include <string.h>

/*
===============================================================
Program: Demonstration of Structure and Union in C
Author: Ankita Kumari
Description:
    → Shows how structure and union work
    → Demonstrates memory allocation, data access, and behavior
===============================================================
*/

/* -------------------- STRUCTURE EXAMPLE -------------------- */
// A structure can store multiple data members at once.
// Each member has its own memory location.

struct Student
{
    int rollNo;    // integer data member
    char name[30]; // string data member
    float marks;   // float data member
};

void showStructure()
{
    printf("===== STRUCTURE EXAMPLE =====\n");

    struct Student s1;

    // Assigning values to structure members
    s1.rollNo = 101;
    strcpy(s1.name, "Ankita");
    s1.marks = 92.5;

    // Accessing structure members
    printf("Roll No : %d\n", s1.rollNo);
    printf("Name    : %s\n", s1.name);
    printf("Marks   : %.2f\n", s1.marks);

    // Size of structure = sum of sizes of all members (plus padding)
    printf("Size of Structure = %lu bytes\n\n", sizeof(s1));
}

/* ---------------------- UNION EXAMPLE ---------------------- */
// A union can store only one data member at a time.
// All members share the same memory location.

union Employee
{
    int empId;
    char empName[30];
    float salary;
};

void showUnion()
{
    printf("===== UNION EXAMPLE =====\n");

    union Employee e1;

    // Assigning value to first member
    e1.empId = 2001;
    printf("empId  : %d\n", e1.empId);

    // Assigning value to second member overwrites previous one
    strcpy(e1.empName, "Rahul");
    printf("empName: %s\n", e1.empName);

    // Assigning value to third member overwrites all previous
    e1.salary = 55000.75;
    printf("salary : %.2f\n", e1.salary);

    // Printing all together shows how previous data gets lost
    printf("empId (after overwrite): %d\n", e1.empId);       // garbage
    printf("empName (after overwrite): %s\n\n", e1.empName); // garbage

    // Size of union = size of largest data member
    printf("Size of Union = %lu bytes\n\n", sizeof(e1));
}

/* --------------------------- MAIN --------------------------- */
int main()
{
    showStructure();
    showUnion();

    /*
    =============================================================
    KEY DIFFERENCES BETWEEN STRUCTURE AND UNION
    -------------------------------------------------------------
    1. Structure: Each member has separate memory.
       Union: All members share the same memory.

    2. Structure: Can store all members’ values at once.
       Union: Can store only one member’s value at a time.

    3. Structure: Size = sum of all members (plus padding).
       Union: Size = size of the largest member.

    4. Structure: Each member can be accessed independently.
       Union: Changing one member affects others.
    =============================================================
    */

    return 0;
}

/*
Output:
===== STRUCTURE EXAMPLE =====
Roll No : 101
Name    : Ankita
Marks   : 92.50
Size of Structure = 40 bytes

===== UNION EXAMPLE =====
empId  : 2001
empName: Rahul
salary : 55000.75
empId (after overwrite): 1196873920
empName (after overwrite): ��VGl

Size of Union = 32 bytes
*/