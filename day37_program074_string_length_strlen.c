/*
 * Day 37 (03/11/2026) - Program 74
 * Length of a String (Using strlen)
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a string: hello
 *   Length = 5
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length = %lu\n", strlen(str));
    return 0;
}
