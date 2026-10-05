/*
 * Day 38 (04/11/2026) - Program 76
 * Concatenate Two Strings (Without strcat)
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter first string: Hello
 *   Enter second string: World
 *   Concatenated string: HelloWorld
 */

#include <stdio.h>

int main() {
    char str1[100], str2[50];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // find the end of str1
    for (i = 0; str1[i] != '\0'; i++) {
        ;
    }

    // copy str2 after the end of str1
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);
    return 0;
}
