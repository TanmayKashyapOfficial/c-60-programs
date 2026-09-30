/*
 * Day 25 (22/10/2026) - Program 49
 * Reverse a Number
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a positive number: 1234
 *   Reversed number = 4321
 */

#include <stdio.h>

int main() {
    int number, digit, reversed = 0;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive number.\n");
    } else {
        while (number != 0) {
            digit = number % 10;             // last digit
            reversed = reversed * 10 + digit;
            number = number / 10;            // remove last digit
        }
        printf("Reversed number = %d\n", reversed);
    }

    return 0;
}
