/*
 * Day 40 (06/11/2026) - Program 80
 * Count Consonants in a String
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a string: programming
 *   Number of consonants = 8
 */

#include <stdio.h>

int main() {
    char str[100];
    int i, consonantCount = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        int isAlphabet = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
        int isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

        if (isAlphabet && !isVowel) {
            consonantCount++;
        }
    }

    printf("Number of consonants = %d\n", consonantCount);
    return 0;
}
