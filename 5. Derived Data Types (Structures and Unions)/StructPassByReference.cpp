#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function to modify student details
void updateMarks(Student *s, float newMarks) {
    s->marks = newMarks; // Using arrow operator to access structure members
}

int main() {
    Student student1 = {"Bob", 102, 85.0};

    cout << "Before update: Marks = " << student1.marks << endl;

    // Passing the address of the structure
    updateMarks(&student1, 90.0);

    cout << "After update: Marks = " << student1.marks << endl;

    return 0;
}

/*
Before update: Marks = 85
After update: Marks = 90
*/
