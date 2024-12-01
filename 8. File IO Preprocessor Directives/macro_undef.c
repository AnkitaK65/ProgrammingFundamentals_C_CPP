// Topic: Macro Undefinition Directives (#undef)

#include <stdio.h>

#define GREETING "Hello, World!"
#undef GREETING
#define GREETING "Hello, Universe!"

int main() {
    printf("%s\n", GREETING);
    return 0;
}
// Hello, Universe!