/*
Topic: Call by Reference (C using Pointers)
C does not support references like C++. 
Instead, we use pointers to achieve call by reference.
*/

#include <stdio.h>

void change(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 5;
    change(&a);
    printf("Value of a after function call: %d\n", a); // becomes 15
    return 0;
}
/*
Output:
Value of a after function call: 15
*/