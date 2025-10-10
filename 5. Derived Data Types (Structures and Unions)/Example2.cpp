#include <iostream>
#include <cstring>
using namespace std;

/*
=================================================================
Program: Demonstration of Structure and Union in C++
Author: Ankita Kumari
Description:
    → Shows how structure and union work in C++
    → Demonstrates new C++ capabilities like:
        - Member functions inside structure
        - Access specifiers (public/private)
        - Constructors
=================================================================
*/


/* --------------------- STRUCTURE IN C++ ---------------------
   ✅ DIFFERENCE FROM C:
      1. In C, structure can contain only data members.
      2. In C++, structure can have:
         - data members
         - member functions
         - constructors/destructors
         - static members
         - access specifiers (public/private/protected)
   ------------------------------------------------------------ */

struct Student {
    // Members (data)
private:  // Encapsulation (not available in C)
    int rollNo;

public:
    string name;
    float marks;

    // Constructor (only in C++)
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    // Member function (only in C++)
    void display() {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "Marks   : " << marks << endl;
    }
};


/* ----------------------- UNION IN C++ -----------------------
   ✅ DIFFERENCE FROM C:
      1. Same memory-sharing concept as C.
      2. Can have member functions (unlike C).
      3. Cannot have constructors/destructors if any
         non-trivial data types (like string) are used.
      4. Access specifiers (public/private) can be used.
   ------------------------------------------------------------ */

union Employee {
    int empId;
    float salary;
    char name[30];

    // Member function (allowed in C++, not in C)
    void showData() {
        cout << "empId: " << empId << " | salary: " << salary 
             << " | name: " << name << endl;
    }
};


/* --------------------------- MAIN --------------------------- */
int main() {
    cout << "===== STRUCTURE EXAMPLE (C++) =====" << endl;

    // Creating object using constructor
    Student s1(101, "Ankita", 93.5);
    s1.display();

    cout << "Size of Structure: " << sizeof(s1) << " bytes\n\n";


    cout << "===== UNION EXAMPLE (C++) =====" << endl;

    Employee e1; // Create a union variable

    // Assigning one member at a time (others are overwritten)
    e1.empId = 2001;
    cout << "After empId assignment: ";
    e1.showData();

    strcpy(e1.name, "Rahul");
    cout << "After name assignment: ";
    e1.showData();

    e1.salary = 60000.50;
    cout << "After salary assignment: ";
    e1.showData();

    cout << "Size of Union: " << sizeof(e1) << " bytes\n\n";

    /*
    =============================================================
    KEY DIFFERENCES (C vs C++) — Quick Summary
    -------------------------------------------------------------
    STRUCTURE:
      • C: Only data, all members public.
      • C++: Data + functions + constructors; supports OOP features.

    UNION:
      • Same memory-sharing logic in both C and C++.
      • C++ allows member functions, but still cannot
        store multiple values at once.

    COMMON:
      • In both, unions share memory; structures don’t.
    =============================================================
    */

    return 0;
}

/*
Output:
===== STRUCTURE EXAMPLE (C++) =====
Roll No : 101
Name    : Ankita
Marks   : 93.5
Size of Structure: 40 bytes

===== UNION EXAMPLE (C++) =====
After empId assignment: empId: 2001 | salary: 2.804e-42 | name: �
After name assignment: empId: 1969774930 | salary: 2.94577e+32 | name: Rahul
After salary assignment: empId: 1198153856 | salary: 60000.5 | name: �`jGl
Size of Union: 32 bytes
*/