/*
 * Day 40 (06/11/2026) - Program 79
 * Count Vowels in a String
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a string: programming
 *   Number of vowels = 3
 */

#include <stdio.h>

int main() {
    char str[100];
    int i, vowelCount = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }

    printf("Number of vowels = %d\n", vowelCount);
    return 0;
}
