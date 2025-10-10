#include <iostream>
#include <string>
using namespace std;

/*
====================================================================
PROGRAM: Demonstration of Difference Between STRUCT and CLASS in C++
AUTHOR : Ankita Kumari
DESCRIPTION:
    → Both struct and class can contain data members & member functions.
    → The main difference lies in their DEFAULT ACCESS LEVEL:
          • struct  → members are PUBLIC by default
          • class   → members are PRIVATE by default
    → Also demonstrates inheritance and encapsulation.
====================================================================
*/


/* --------------------------- STRUCT EXAMPLE ---------------------------
   ✅ STRUCT in C++
      - Default access = PUBLIC
      - Generally used for lightweight data storage
      - Can contain:
          • Data members
          • Member functions
          • Constructors
          • Static members
      - No need for explicit getters/setters if data is public
------------------------------------------------------------------------*/
struct Student {
    // public by default
    int rollNo;
    string name;

    // Constructor (allowed in C++)
    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    // Member function
    void display() {
        cout << "[STRUCT] Roll No: " << rollNo << ", Name: " << name << endl;
    }
};


/* ---------------------------- CLASS EXAMPLE ----------------------------
   ✅ CLASS in C++
      - Default access = PRIVATE
      - Designed for encapsulation & data hiding
      - Data members are private by default
      - Access to data is controlled via public methods
      - Supports all OOP features: abstraction, encapsulation,
        inheritance, and polymorphism
------------------------------------------------------------------------*/
class Employee {
    // private by default
    int empId;
    string empName;
    float salary;

public:
    // Constructor
    Employee(int id, string name, float sal) {
        empId = id;
        empName = name;
        salary = sal;
    }

    // Member function (public interface)
    void showData() {
        cout << "[CLASS] Emp ID: " << empId
             << ", Name: " << empName
             << ", Salary: " << salary << endl;
    }

    // Setter & Getter demonstrate encapsulation
    void setSalary(float s) { salary = s; }
    float getSalary() const { return salary; }
};


/* ----------------------- INHERITANCE DEMONSTRATION -----------------------
   ✅ Difference in Default Inheritance Type
      - struct → public inheritance by default
      - class  → private inheritance by default
----------------------------------------------------------------------------*/

// Base structure
struct BaseStruct {
    void greet() { cout << "Hello from BaseStruct!\n"; }
};

// Derived using struct → public inheritance (by default)
struct DerivedStruct : BaseStruct {};

// Base class
class BaseClass {
public:
    void greet() { cout << "Hello from BaseClass!\n"; }
};

// Derived using class → private inheritance (by default)
class DerivedClass : BaseClass {
    // greet() becomes private here
public:
    void callGreet() {
        // allowed inside class, but not outside
        greet();
    }
};


/* ----------------------------- MAIN FUNCTION ----------------------------- */
int main() {
    cout << "========= STRUCT EXAMPLE =========\n";
    Student s1(101, "Ankita");
    s1.display();  // direct access allowed (public members)
    s1.rollNo = 105;  // direct modification allowed
    cout << "Updated Roll No: " << s1.rollNo << "\n\n";


    cout << "========= CLASS EXAMPLE =========\n";
    Employee e1(2001, "Rahul", 55000.75);
    // e1.empId = 999;   ❌ ERROR: private member, not accessible
    e1.showData();

    // Using setter and getter (encapsulation)
    e1.setSalary(60000.00);
    cout << "Updated Salary: " << e1.getSalary() << "\n\n";


    cout << "========= INHERITANCE BEHAVIOR =========\n";
    DerivedStruct ds;
    ds.greet();   // ✅ Accessible (public inheritance)

    DerivedClass dc;
    // dc.greet();  ❌ ERROR: greet() is private in DerivedClass
    dc.callGreet(); // ✅ Allowed through public wrapper
    cout << endl;


    /*
    ========================================================================
    🔹 KEY DIFFERENCES: CLASS vs STRUCT in C++

    1️⃣ DEFAULT ACCESS:
        struct → public
        class  → private

    2️⃣ DEFAULT INHERITANCE:
        struct → public
        class  → private

    3️⃣ USE CASE:
        struct → for simple data grouping (like C)
        class  → for encapsulated, object-oriented design

    4️⃣ ACCESS CONTROL:
        struct members can be accessed directly (unless specified private)
        class members must use methods (encapsulation principle)

    5️⃣ OOP FEATURES:
        Both support constructors, destructors, functions, inheritance,
        operator overloading, etc.
        But in practice, ‘class’ is used for full OOP; ‘struct’ for plain data.
    ========================================================================
    */

    return 0;
}

/*
Output:
========= STRUCT EXAMPLE =========
[STRUCT] Roll No: 101, Name: Ankita
Updated Roll No: 105

========= CLASS EXAMPLE =========
[CLASS] Emp ID: 2001, Name: Rahul, Salary: 55000.8
Updated Salary: 60000

========= INHERITANCE BEHAVIOR =========
Hello from BaseStruct!
Hello from BaseClass!
*/