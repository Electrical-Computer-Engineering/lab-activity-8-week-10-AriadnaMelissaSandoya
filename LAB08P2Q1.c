// Ariadna Sandoya
// SBU ID: 116173809

#include <stdio.h>
#include <stdbool.h>

int my_strcmp(const char a[], const char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return 1;
        }
        i++;
    }
    if (a[i] == '\0' && b[i] == '\0') {
        return 0;
    }
    return 1;
}

int my_strncmp(const char a[], const char b[], int n) {
    int i = 0;
    while (i < n && a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return 1;
        }
        i++;
    }
    if (i == n || (a[i] == '\0' && b[i] == '\0')) {
        return 0;
    }
    return 1;
}
char* my_strcpy(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char* my_strcat(char dest[], const char src[]) {
    int i = 0, j = 0;
    
    // Find end of string
    while (dest[i] != '\0') {
        i++;
    }
    
    // Append
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    // end string
    dest[i] = '\0';

    return dest;
}

char* my_reverse(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int i = 0;
    int j = length - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

int main() {
    char str1[100];
    char str2[100];
    char str3[100];
    char str4[100];

    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("\nEnter string 2: ");
    scanf("%s", str2);
    printf("\nEnter string 3: ");
    scanf("%s", str3);
    printf("\nEnter string 4: ");
    scanf("%s", str4);

    // Test my_strcmp
    printf("my_strcmp: %d\n", my_strcmp(str1, str2));
    printf("my_strcmp: %d\n", my_strcmp(str1, str3));

    // Test my_strncmp
    int num1, num2;
    printf("Enter n digits to check string 1 and 2: ");
    scanf("%d", &num1);
    printf("\nEnter n digits to check string 3 and 4: ");
    scanf("%d", &num2);
    printf("my_strncmp (string 1 and 2): %d\n", my_strncmp(str1, str2, num1));
    printf("my_strncmp (string 3 and 4): %d\n", my_strncmp(str3, str4, num2));
    printf("my_strcpy (string 1 and 2)): %s\n", my_strcpy(str1, str2));
    printf("my_strcpy (string 3 and 4)): %s\n", my_strcpy(str3, str4));
    printf("my_strcat (string 1 and 2)): %s\n", my_strcat(str1, str2));
    printf("my_strcat (string 3 and 4)): %s\n", my_strcat(str3, str4));
    printf("my_reverse (string 1)): %s\n", my_reverse(str1));
    printf("my_reverse (string 3)): %s\n", my_reverse(str3));

    return 0;
}
