// Topic: Error Directives (#error)

#include <stdio.h>

// Uncomment the line below to resolve the error
// #define REQUIRED_FEATURE

#ifndef REQUIRED_FEATURE
#error "REQUIRED_FEATURE is not defined. Please define it to proceed."
#endif

int main() {
    printf("Code compiled successfully.\n");
    return 0;
}

// error_directive.c:9:2: error: "REQUIRED_FEATURE is not defined. Please define it to proceed."
// #error "REQUIRED_FEATURE is not defined. Please define it to proceed."