/*
 * Day 73 (09/12/2026) - Program 145
 * Convert Uppercase to Lowercase Character
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter an uppercase letter: K
 *   Lowercase letter = k
 */

#include <stdio.h>

int main() {
    char ch;

    printf("Enter an uppercase letter: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
        printf("Lowercase letter = %c\n", ch);
    } else {
        printf("That is not an uppercase letter.\n");
    }

    return 0;
}
