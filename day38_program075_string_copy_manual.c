/*
 * Day 38 (04/11/2026) - Program 75
 * Copy a String (Without strcpy)
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a string: hello
 *   Copied string: hello
 */

#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", source);

    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';

    printf("Copied string: %s\n", destination);
    return 0;
}
