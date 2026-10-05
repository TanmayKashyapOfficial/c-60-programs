/*
 * Day 43 (09/11/2026) - Program 85
 * Count Digits in a String
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a string: abc123xyz45
 *   Number of digits = 5
 */

#include <stdio.h>

int main() {
    char str[100];
    int i, digitCount = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digitCount++;
        }
    }

    printf("Number of digits = %d\n", digitCount);
    return 0;
}
