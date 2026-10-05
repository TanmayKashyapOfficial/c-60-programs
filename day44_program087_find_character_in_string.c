/*
 * Day 44 (10/11/2026) - Program 87
 * Find a Character in a String
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a string: programming
 *   Enter a character to find: g
 *   'g' found at position 4
 *   'g' found at position 11
 */

#include <stdio.h>

int main() {
    char str[100];
    char target;
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to find: ");
    scanf(" %c", &target);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            printf("'%c' found at position %d\n", target, i + 1);
            found = 1;
        }
    }

    if (found == 0) {
        printf("'%c' not found in the string.\n", target);
    }

    return 0;
}
