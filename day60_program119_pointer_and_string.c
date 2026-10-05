/*
 * Day 60 (26/11/2026) - Program 119
 * Pointer and String
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   String using pointer: Hello
 */

#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *ptr = str;

    printf("String using pointer: ");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
