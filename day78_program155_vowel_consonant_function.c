/*
 * Day 78 (14/12/2026) - Program 155
 * Check Vowel or Consonant Using Function
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a letter: e
 *   e is a vowel.
 */

#include <stdio.h>

int isVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return 1;
    }
    return 0;
}

int main() {
    char ch;

    printf("Enter a letter: ");
    scanf(" %c", &ch);

    if (isVowel(ch) == 1) {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}
