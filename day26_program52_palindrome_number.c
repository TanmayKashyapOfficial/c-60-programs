/*
 * Day 26 (23/10/2026) - Program 52
 * Palindrome Number
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a positive number: 121
 *   121 is a palindrome.
 */

#include <stdio.h>

int main() {
    int number, original, digit, reversed = 0;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive number.\n");
    } else {
        original = number;

        while (number != 0) {
            digit = number % 10;
            reversed = reversed * 10 + digit;
            number = number / 10;
        }

        if (original == reversed) {
            printf("%d is a palindrome.\n", original);
        } else {
            printf("%d is not a palindrome.\n", original);
        }
    }

    return 0;
}
