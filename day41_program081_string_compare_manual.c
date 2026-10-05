/*
 * Day 41 (07/11/2026) - Program 81
 * Compare Two Strings (Without strcmp)
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter first string: apple
 *   Enter second string: apple
 *   Strings are equal.
 */

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, equal = 1;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
    }

    if (equal == 1) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
