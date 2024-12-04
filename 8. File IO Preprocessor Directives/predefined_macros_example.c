// Topic: Predefined Macros

#include <stdio.h>

int main() {
    // __FILE__ returns the current source file name
    printf("Current File: %s\n", __FILE__);
    
    // __LINE__ returns the current line number where this macro is called
    printf("Current Line: %d\n", __LINE__);
    
    // __DATE__ returns the date when the source file was compiled
    printf("Compilation Date: %s\n", __DATE__);
    
    // __TIME__ returns the time when the source file was compiled
    printf("Compilation Time: %s\n", __TIME__);
    
    // __STDC__ is defined as 1 if the compiler is following ANSI C standard
    printf("Is ANSI C compliant? %d\n", __STDC__);
    
    // __cplusplus is defined for C++ compilers, not in C compilers
    #ifdef __cplusplus
        printf("Compiled as C++: Yes\n");
    #else
        printf("Compiled as C: Yes\n");
    #endif
    
    return 0;
}
// Current File: predefined_macros_example.c
// Current Line: 10
// Compilation Date: Dec  4 2024
// Compilation Time: 14:01:52
// Is ANSI C compliant? 1
// Compiled as C: Yes