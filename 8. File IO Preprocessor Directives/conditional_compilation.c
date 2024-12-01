// Topic: Conditional Compilation Directives (#ifdef, #ifndef, #if, #else, #elif, #endif)

#include <stdio.h>

#define FEATURE_ENABLED

int main() {
#ifdef FEATURE_ENABLED
    printf("Feature is enabled!\n");
#else
    printf("Feature is disabled.\n");
#endif

#ifndef DEBUG
    printf("Debugging is off.\n");
#else
    printf("Debugging is on.\n");
#endif

#if defined(FEATURE_ENABLED) && !defined(DEBUG)
    printf("Feature is enabled but debugging is off.\n");
#elif defined(DEBUG)
    printf("Debugging is on.\n");
#else
    printf("Neither feature nor debugging is active.\n");
#endif

    return 0;
}
// Feature is enabled!
// Debugging is off.
// Feature is enabled but debugging is off.