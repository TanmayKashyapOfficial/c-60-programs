/*
 * Day 43 (09/11/2026) - Program 86
 * Remove Spaces from a String
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a sentence: Hello World Test
 *   Without spaces: HelloWorldTest
 */

#include <stdio.h>

int main() {
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("Without spaces: %s\n", result);
    return 0;
}
