// Ariadna Sandoya
// SBU ID: 116173809

#include <stdio.h>
#include <string.h>

void remove_match(char s1[], const char s2[], char final[]) {
    int i, j;
    int k = 0;
    int match;

    for (i = 0; s1[i] != '\0'; i++) {
        match = 0;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                match = 1;
                break;
            }
        }
        if (!match) {
            final[k++] = s1[i];
        }
    }
    // end of string
    final[k] = '\0';
}

int main() {
    char s1[100], s2[100], final[100];

    // Input strings
    printf("Enter string 1: ");
    scanf("%s", s1);

    printf("Enter string 2: ");
    scanf("%s", s2);

    // Remove matching characters
    remove_match(s1, s2, final);

    // Output result
    printf("Output:\n%s\n", final);

    return 0;
}

