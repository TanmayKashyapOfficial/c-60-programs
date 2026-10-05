/*
 * Day 76 (12/12/2026) - Program 152
 * Count Frequency of a Character in a String
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a string: programming
 *   Enter a character to count: g
 *   'g' appears 2 time(s)
 */

#include <stdio.h>

int main() {
    char str[100], target;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to count: ");
    scanf(" %c", &target);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("'%c' appears %d time(s)\n", target, count);
    return 0;
}
