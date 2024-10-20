#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Character classification
    if (isalpha(ch)) {
        printf("'%c' is an alphabetic character.\n", ch);
    } else {
        printf("'%c' is not an alphabetic character.\n", ch);
    }

    if (isdigit(ch)) {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is not a digit.\n", ch);
    }

    if (islower(ch)) {
        printf("'%c' is a lowercase letter.\n", ch);
    } else if (isupper(ch)) {
        printf("'%c' is an uppercase letter.\n", ch);
    } else {
        printf("'%c' is neither a lowercase nor an uppercase letter.\n", ch);
    }

    if (isspace(ch)) {
        printf("'%c' is a whitespace character.\n", ch);
    } else {
        printf("'%c' is not a whitespace character.\n", ch);
    }

    // Character transformation
    printf("Lowercase of '%c': %c\n", ch, tolower(ch));
    printf("Uppercase of '%c': %c\n", ch, toupper(ch));

    return 0;
}
