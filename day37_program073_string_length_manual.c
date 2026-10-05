/*
 * Day 37 (03/11/2026) - Program 73
 * Length of a String (Without strlen)
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a string: hello
 *   Length = 5
 */

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length = %d\n", length);
    return 0;
}
