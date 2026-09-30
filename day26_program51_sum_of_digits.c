/*
 * Day 26 (23/10/2026) - Program 51
 * Sum of Digits
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 1234
 *   Sum of digits = 10
 */

#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number != 0) {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
