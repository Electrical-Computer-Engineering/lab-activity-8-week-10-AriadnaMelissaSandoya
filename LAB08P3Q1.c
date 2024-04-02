// Ariadna Sandoya
// SBU ID: 116173809

#include <stdio.h>
#include <string.h>

int main() {
    char str[11];  // 10 characters + 1 for null terminator
    int length, i, j;

    // Input
    printf("Enter a string with 10 characters: ");
    scanf("%s", str);

    // String length
    length = strlen(str);

    // Print the string repeatedly with shifting characters to the right
    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}

