#include <stdio.h>
#include <ctype.h>

void correctWord(char *s) {
    int uppercaseCount = 0, lowercaseCount = 0;

    // Count the number of uppercase and lowercase letters in the word
    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            uppercaseCount++;
        } else {
            lowercaseCount++;
        }
    }

    // Convert the word to lowercase if there are more lowercase letters or equal number of both
    if (lowercaseCount >= uppercaseCount) {
        for (int i = 0; s[i] != '\0'; i++) {
            putchar(tolower(s[i]));
        }
    } else {
        for (int i = 0; s[i] != '\0'; i++) {
            putchar(toupper(s[i]));
        }
    }

    printf("\n");
}

int main() {
    char word[101];

    // Read input word
    scanf("%s", word);

    // Call the function to correct the word and print the result
    correctWord(word);

    return 0;
}
