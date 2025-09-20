/* 
    Topic: Strings in C - Various Cases
*/

#include <stdio.h>
#include <string.h> // for strlen

int main() {
    // 1. Direct initialization with string literal
    char str1[] = "Hello";   // Size = 6 (5 chars + '\0')

    // 2. Initialization with explicit characters
    char str2[6] = {'H','e','l','l','o','\0'};

    // 3. String with whitespaces
    char str3[] = "Hello World";  // Needs size = 12 (11 + '\0')

    // 4. Uninitialized char array (garbage until set)
    char str4[10];
    printf("Garbage Value: str4 = %s (length = %lu)\n", str4, strlen(str4));
    //If there’s no '\0' anywhere, printf may:
    // Print garbage characters,
    // Run past the array bounds (undefined behavior),
    // Or even crash your program.
    printf("Printing str4 as characters (may be weird symbols):\n");
    for (int i = 0; i < 10; i++) {
        printf("str4[%d] = %d (char: %c)\n", i, str4[i], str4[i]);
    }

    strcpy(str4, "Hi");   // copying string safely

    // 5. User input without spaces (scanf)
    char str5[20];
    printf("Enter a word (no spaces): ");
    scanf("%s", str5);

    // 6. User input with spaces (fgets)
    char str6[30];
    printf("Enter a sentence (with spaces): ");
    getchar(); // clear leftover newline
    fgets(str6, sizeof(str6), stdin);

    // ---- Print Results ----
    printf("\n--- String Examples ---\n");
    printf("str1 = %s (length = %zu)\n", str1, strlen(str1));
    printf("str2 = %s (length = %lu)\n", str2, strlen(str2));
    printf("str3 = %s (length = %lu)\n", str3, strlen(str3));
    printf("str4 = %s (length = %lu)\n", str4, strlen(str4));
    printf("str5 (scanf, stops at space) = %s\n", str5);
    printf("str6 (fgets, keeps spaces)  = %s\nProgramming", str6);
    //strlen() returns a value of type size_t (an unsigned integer type).
    // The standard format specifier for size_t is %zu (C99 and later).
    //Many compilers also accept %lu (unsigned long).

    return 0;
}

/*
Output:
Garbage Value: str4 =  (length = 0)
Printing str4 as characters (may be weird symbols):
str4[0] = 0 (char: )
str4[1] = 0 (char: )
str4[2] = 29 (char: )
str4[3] = -41 (char: �)
str4[4] = 9 (char:      )
str4[5] = 0 (char: )
str4[6] = -1 (char: �)
str4[7] = -1 (char: �)
str4[8] = -1 (char: �)
str4[9] = 15 (char: )
Enter a word (no spaces): Programming
Enter a sentence (with spaces): Programming Fundamental using C/C++

--- String Examples ---
str1 = Hello (length = 5)
str2 = Hello (length = 5)
str3 = Hello World (length = 11)
str4 = Hi (length = 2)
str5 (scanf, stops at space) = Programming
str6 (fgets, keeps spaces)  = Programming Fundamental using
*/