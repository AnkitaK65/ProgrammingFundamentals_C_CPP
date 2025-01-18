// Q. Pointers to Pointers: Demonstrate a pointer to a pointer. Dynamically allocate a 2D array to store student grades and display them.

#include <iostream>
using namespace std;

int main() {
    int students, subjects;
    
    // Input the number of students and subjects
    cout << "Enter the number of students: ";
    cin >> students;
    cout << "Enter the number of subjects: ";
    cin >> subjects;
    
    // Dynamically allocate memory for 2D array (students x subjects)
    int** grades = new int*[students];  // Pointer to pointer (array of pointers)
    for (int i = 0; i < students; i++) {
        grades[i] = new int[subjects];  // Allocate memory for each student (subjects)
    }
    
    // Input grades for each student and subject
    cout << "Enter grades for each student:" << endl;
    for (int i = 0; i < students; i++) {
        cout << "Enter grades for Student " << i + 1 << ":" << endl;
        for (int j = 0; j < subjects; j++) {
            cout << "Enter grade for Subject " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }
    
    // Display the grades
    cout << "The grades for each student are:" << endl;
    for (int i = 0; i < students; i++) {
        cout << "Grades for Student " << i + 1 << ": ";
        for (int j = 0; j < subjects; j++) {
            cout << grades[i][j] << " ";
        }
        cout << endl;
    }
    
    // Free dynamically allocated memory
    for (int i = 0; i < students; i++) {
        delete[] grades[i];  // Deallocate memory for each student's grades
    }
    delete[] grades;  // Deallocate memory for the array of pointers
    
    return 0;
}

/*
Output:
Enter the number of students: 3
Enter the number of subjects: 4
Enter grades for each student:
Enter grades for Student 1:
Enter grade for Subject 1: 85
Enter grade for Subject 2: 90
Enter grade for Subject 3: 78
Enter grade for Subject 4: 92
Enter grades for Student 2:
Enter grade for Subject 1: 88
Enter grade for Subject 2: 75
Enter grade for Subject 3: 80
Enter grade for Subject 4: 89
Enter grades for Student 3:
Enter grade for Subject 1: 91
Enter grade for Subject 2: 82
Enter grade for Subject 3: 75
Enter grade for Subject 4: 98
The grades for each student are:
Grades for Student 1: 85 90 78 92
Grades for Student 2: 88 75 80 89
Grades for Student 3: 91 82 75 98
*/