/*
 * Day 41 (07/11/2026) - Program 82
 * Convert String to Uppercase
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a string: hello
 *   Uppercase: HELLO
 */

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("Uppercase: %s\n", str);
    return 0;
}
