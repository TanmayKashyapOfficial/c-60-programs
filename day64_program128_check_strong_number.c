/*
 * Day 64 (30/11/2026) - Program 128
 * Check Strong Number
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 145
 *   145 is a strong number.
 */

#include <stdio.h>

int main() {
    int number, original, digit, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        digit = number % 10;

        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        number = number / 10;
    }

    if (sum == original) {
        printf("%d is a strong number.\n", original);
    } else {
        printf("%d is not a strong number.\n", original);
    }

    return 0;
}
