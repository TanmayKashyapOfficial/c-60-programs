/*
 * Day 63 (29/11/2026) - Program 126
 * Check Armstrong Number
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a 3-digit number: 153
 *   153 is an Armstrong number.
 */

#include <stdio.h>

int main() {
    int number, original, digit, sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        digit = number % 10;
        sum = sum + (digit * digit * digit);
        number = number / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
