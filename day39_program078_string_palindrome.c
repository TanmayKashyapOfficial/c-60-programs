/*
 * Day 39 (05/11/2026) - Program 78
 * Check if a String is a Palindrome
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a string: madam
 *   madam is a palindrome.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
