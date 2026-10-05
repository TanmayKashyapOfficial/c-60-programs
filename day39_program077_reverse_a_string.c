/*
 * Day 39 (05/11/2026) - Program 77
 * Reverse a String
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a string: hello
 *   Reversed string: olleh
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
