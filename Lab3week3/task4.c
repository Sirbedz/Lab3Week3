#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char sentence[MAX_LENGTH];
    char vowel;
    int length = 0, wordCount = 0, vowelCount = 0, freq = 0;
    int i;

    printf("Enter a sentence (max %d characters): ", MAX_LENGTH - 1);
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; i < MAX_LENGTH; i++) {
        if (sentence[i] == '\n') {
            sentence[i] = '\0';
            break;
        }
    }

    while (sentence[length] != '\0') {
        length++;
    }
    printf("Length of the sentence: %d\n", length);

    for (i = 0; i < length; i++) {
        if (sentence[i] == ' ') {
            wordCount++;
        }
    }
    wordCount++;
    printf("Number of words: %d\n", wordCount);

    for (i = 0; i < length; i++) {
        char ch = sentence[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }
    printf("Number of vowels: %d\n", vowelCount);

    printf("Enter a vowel: ");
    scanf(" %c", &vowel);
    
    for (i = 0; i < length; i++) {
        if (sentence[i] == vowel || sentence[i] == vowel + 32 || sentence[i] == vowel - 32) {
            freq++;
        }
    }
    printf("Frequency of '%c': %d\n", vowel, freq);

    return 0;
}

