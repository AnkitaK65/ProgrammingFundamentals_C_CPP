/* 
    Topic: Variable Length Array (C99 Feature)
    NOTE:
    - Not in C89
    - Optional in C11 and later
    - Rarely used in industry; dynamic memory allocation (malloc/free) is preferred
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n]; // Variable length array
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Print newline so that shell prompt does not appear on the same line
    return 0;
}

/*
Output:
Enter size: 5
1 2 3 4 5
*/