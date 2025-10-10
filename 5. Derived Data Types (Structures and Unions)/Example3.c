#include <stdio.h>
#include <string.h>

/*
=====================================================================
PROGRAM: Structure and Union Input Example in C
AUTHOR : Ankita Kumari
DESCRIPTION:
    → Demonstrates user input for both Structure and Union.
    → Explains how Structure stores all data members separately,
      while Union shares the same memory for all members.
=====================================================================
*/


/* --------------------------- STRUCTURE EXAMPLE ---------------------------
   ✅ Structure:
      - Each data member has its own memory.
      - Can store multiple values simultaneously.
------------------------------------------------------------------------ */
struct Student {
    int rollNo;
    char name[30];
    float marks;
};


/* ----------------------------- UNION EXAMPLE -----------------------------
   ✅ Union:
      - All members share the same memory location.
      - Only one member’s value can be stored at a time.
------------------------------------------------------------------------ */
union Employee {
    int empId;
    char empName[30];
    float salary;
};


int main() {
    struct Student s1;
    union Employee e1;

    printf("===== STRUCTURE INPUT EXAMPLE =====\n");

    // Taking input for structure
    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollNo);
    getchar(); // clear newline character

    printf("Enter Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0'; // remove newline from fgets

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    // Display structure data
    printf("\n--- Student Details ---\n");
    printf("Roll No : %d\n", s1.rollNo);
    printf("Name    : %s\n", s1.name);
    printf("Marks   : %.2f\n", s1.marks);
    printf("Size of Structure : %lu bytes\n\n", sizeof(s1));



    printf("===== UNION INPUT EXAMPLE =====\n");

    int choice;
    printf("Choose which data to enter in union:\n");
    printf("1. empId\n2. empName\n3. salary\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);
    getchar();

    switch (choice) {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &e1.empId);
            printf("\n--- Employee Data ---\n");
            printf("empId : %d\n", e1.empId);
            break;

        case 2:
            printf("Enter Employee Name: ");
            fgets(e1.empName, sizeof(e1.empName), stdin);
            e1.empName[strcspn(e1.empName, "\n")] = '\0';
            printf("\n--- Employee Data ---\n");
            printf("empName : %s\n", e1.empName);
            break;

        case 3:
            printf("Enter Salary: ");
            scanf("%f", &e1.salary);
            printf("\n--- Employee Data ---\n");
            printf("salary : %.2f\n", e1.salary);
            break;

        default:
            printf("Invalid choice!\n");
    }

    printf("Size of Union : %lu bytes\n\n", sizeof(e1));


    /*
    =====================================================================
    🔹 KEY DIFFERENCES (STRUCTURE vs UNION in C)
    ---------------------------------------------------------------------
    1️⃣ Memory Allocation:
        Structure → Each member has separate memory.
        Union     → All members share the same memory.

    2️⃣ Data Storage:
        Structure → Can store all members’ values simultaneously.
        Union     → Can store only one member’s value at a time.

    3️⃣ Size:
        Structure → Sum of sizes of all members (plus padding).
        Union     → Size of the largest member.

    4️⃣ Use Case:
        Structure → When you need all data together.
        Union     → When you need only one type of data at a time.
    =====================================================================
    */

    return 0;
}

/*
Output:
===== STRUCTURE INPUT EXAMPLE =====
Enter Roll Number: 101
Enter Name: Ankita
Enter Marks: 88

--- Student Details ---
Roll No : 101
Name    : Ankita
Marks   : 88.00
Size of Structure : 40 bytes

===== UNION INPUT EXAMPLE =====
Choose which data to enter in union:
1. empId
2. empName
3. salary
Enter choice (1-3): 2
Enter Employee Name: Ankita

--- Employee Data ---
empName : Ankita
Size of Union : 32 bytes
*/