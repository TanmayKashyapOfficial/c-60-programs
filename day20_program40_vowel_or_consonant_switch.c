/*
 * Day 20 (17/10/2026) - Program 40
 * Vowel or Consonant Using switch
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a letter: e
 *   e is a vowel.
 */

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a letter: ");
    scanf(" %c", &ch);

    // first check that the input is really an alphabet letter
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel.\n", ch);
                break;
            default:
                printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input. Please enter an alphabet letter.\n");
    }

    return 0;
}
