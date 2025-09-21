/* 
    Topic: Real-world Example – Marks of Students
    3 students × 3 subjects (Maths, English, Science)
*/

#include <stdio.h>

int main() {
    int marks[3][3]; 
    char *subjects[3] = {"Maths", "English", "Science"};

    printf("Enter marks for 3 students (Maths English Science):\n");
    for(int i = 0; i < 3; i++) {
        printf("Student %d: ", i+1);
        for(int j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\nMarks Table:\n");
    printf("Student\t\tMaths\tEnglish\tScience\n");
    printf("-------------------------------------\n");

    for(int i = 0; i < 3; i++) {
        printf("Student %d\t", i+1);
        for(int j = 0; j < 3; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Output:
Enter marks for 3 students (Maths English Science):
Student 1: 78 88 100
Student 2: 69 73 56
Student 3: 93 97 99

Marks Table:
Student         Maths   English Science
-------------------------------------
Student 1       78      88      100
Student 2       69      73      56
Student 3       93      97      99
*/