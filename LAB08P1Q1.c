// Ariadna Sandoya
// SBU ID: 116173809

#include <stdio.h>
#include <ctype.h>

int my_isalpha(char c) {
    if (isalpha(c)) {
        return 1;
    }
    return 0;
}

int my_isdigit(char c) {
    if (c=='0'|'1'|'2'|'3'|'4'|'5'|'6'|'7'|'9') {
        return 1;
    }
    return 0;
}

int my_is_upper(char c) {
    return isupper(c);
}

char my_to_upper(char c) {
    if (islower(c)) {
        return toupper(c);
    }return c;
    
}

char my_to_lower(char c) {
    if (isupper(c)) {
        return tolower(c);
    }return c;
    
}

int main() {
    char c;
    char char2;

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("\nIs upper or lowercase letter: %d\n", my_isalpha(c));
    printf("Is digit: %d\n", my_isdigit(c));
    printf("Is uppercase letter: %d\n", my_is_upper(c));
    printf("To Upper: %c\n", my_to_upper(c));
    printf("To Lower: %c\n", my_to_lower(c));

    printf("Enter a character: ");
    scanf("%c", &char2);

    printf("\nIs upper or lowercase letter: %d\n", my_isalpha(char2));
    printf("Is digit: %d\n", my_isdigit(char2));
    printf("Is uppercase letter: %d\n", my_is_upper(char2));
    printf("To Upper: %c\n", my_to_upper(char2));
    printf("To Lower: %c\n", my_to_lower(char2));

    return 0;
}


