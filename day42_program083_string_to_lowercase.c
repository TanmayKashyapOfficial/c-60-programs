/*
 * Day 42 (08/11/2026) - Program 83
 * Convert String to Lowercase
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a string: HELLO
 *   Lowercase: hello
 */

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }

    printf("Lowercase: %s\n", str);
    return 0;
}
