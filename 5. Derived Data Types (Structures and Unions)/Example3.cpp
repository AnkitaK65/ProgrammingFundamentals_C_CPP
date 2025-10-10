#include <iostream>
#include <cstring>   // for strcpy (used in union)
using namespace std;

/*
=====================================================================
PROGRAM: Structure and Union Input Example in C++
AUTHOR : Ankita Kumari
DESCRIPTION:
    → Demonstrates how to take user input for structure and union.
    → Explains how structure stores all values,
      while union stores only one value at a time (shared memory).
=====================================================================
*/


/* --------------------------- STRUCTURE EXAMPLE ---------------------------
   ✅ Structure: Each data member gets its own memory.
      → Can store multiple values simultaneously.
------------------------------------------------------------------------ */
struct Student {
    int rollNo;
    char name[30];
    float marks;
};


/* ----------------------------- UNION EXAMPLE -----------------------------
   ✅ Union: All members share the same memory.
      → Can store only one value at a time.
------------------------------------------------------------------------ */
union Employee {
    int empId;
    char empName[30];
    float salary;
};


/* ------------------------------- MAIN ----------------------------------- */
int main() {
    cout << "===== STRUCTURE INPUT EXAMPLE =====" << endl;
    Student s1;

    // Taking input for structure
    cout << "Enter Roll Number: ";
    cin >> s1.rollNo;
    cin.ignore(); // clear input buffer before getline

    cout << "Enter Name: ";
    cin.getline(s1.name, 30);

    cout << "Enter Marks: ";
    cin >> s1.marks;

    // Display structure data
    cout << "\n--- Student Details ---" << endl;
    cout << "Roll No : " << s1.rollNo << endl;
    cout << "Name    : " << s1.name << endl;
    cout << "Marks   : " << s1.marks << endl;
    cout << "Size of Structure : " << sizeof(s1) << " bytes\n\n";


    cout << "===== UNION INPUT EXAMPLE =====" << endl;
    Employee e1;

    /*
        NOTE:
        Since union shares memory for all members,
        only one of empId, empName, or salary can hold a valid value at a time.
    */

    int choice;
    cout << "Choose which data to enter in union:\n";
    cout << "1. empId\n2. empName\n3. salary\n";
    cout << "Enter choice (1-3): ";
    cin >> choice;
    cin.ignore();

    switch (choice) {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> e1.empId;
            cout << "\n--- Employee Data ---" << endl;
            cout << "empId : " << e1.empId << endl;
            break;

        case 2:
            cout << "Enter Employee Name: ";
            cin.getline(e1.empName, 30);
            cout << "\n--- Employee Data ---" << endl;
            cout << "empName : " << e1.empName << endl;
            break;

        case 3:
            cout << "Enter Salary: ";
            cin >> e1.salary;
            cout << "\n--- Employee Data ---" << endl;
            cout << "salary : " << e1.salary << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    cout << "Size of Union : " << sizeof(e1) << " bytes\n";

    /*
    =====================================================================
    🔹 KEY DIFFERENCES OBSERVED
    ---------------------------------------------------------------------
    STRUCTURE:
        - Each member has its own memory.
        - Can store multiple values (rollNo, name, marks simultaneously).
        - Size = sum of all members + padding.

    UNION:
        - All members share the same memory.
        - Only one member can store a value at a time.
        - Size = size of the largest member.
    =====================================================================
    */

    return 0;
}

/*
Output:
===== STRUCTURE INPUT EXAMPLE =====
Enter Roll Number: 101
Enter Name: Ankita
Enter Marks: 78

--- Student Details ---
Roll No : 101
Name    : Ankita
Marks   : 78
Size of Structure : 40 bytes

===== UNION INPUT EXAMPLE =====
Choose which data to enter in union:
1. empId
2. empName
3. salary
Enter choice (1-3): 1
Enter Employee ID: 201

--- Employee Data ---
empId : 201
Size of Union : 32 bytes
*/