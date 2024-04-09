// Ariadna Sandoya
// SBU ID: 116173809

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* ToPigLatin(char* word) {
    int len = strlen(word);
    char* result = (char*) malloc((len + 4) * sizeof(char));  // +4 to account for "way", "ay", and potential capitalization
    int index = 0;
    
    // Word starts with a vowel
    if (strchr("AEIOUaeiou", word[0]) != NULL) {
        strcpy(result, word);
        strcat(result, "way"); // Append way
    } else { // Word starts with consonant
        int first_vowel = 0;
        while (word[first_vowel] && !strchr("AEIOUaeiou", word[first_vowel])) {
            first_vowel++;
        }
        
        // Convert all letters to lowercase
        if (isupper(word[0])) {
            result[index++] = toupper(word[first_vowel]);
        } else {
            result[index++] = word[first_vowel];
        }
        
        for (int i = first_vowel + 1; i < len; i++) {
            result[index++] = word[i];
        }
        
        // Append consonants and "ay"
        for (int i = 0; i < first_vowel; i++) {
            result[index++] = word[i];
        }
        strcpy(result + index, "ay");
    }
    
    return result;
}

int main() {
    const int MAX_WORDS = 5;
    const int MAX_LENGTH = 40;  // +1 for null terminator
    char words[MAX_WORDS][MAX_LENGTH];
    
    printf("Input 5 words: ");
    for (int i = 0; i < MAX_WORDS; i++) {
        scanf("%s", words[i]);
    }
    
    printf("Pig Latin version of the 5 words:\n");
    for (int i = 0; i < MAX_WORDS; i++) {
        char* pig_latin_word = ToPigLatin(words[i]);
        printf("%s ", pig_latin_word);
        free(pig_latin_word);
    }
    return 0;
}
