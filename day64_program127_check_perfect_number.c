/*
 * Day 64 (30/11/2026) - Program 127
 * Check Perfect Number
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 28
 *   28 is a perfect number.
 */

#include <stdio.h>

int main() {
    int number, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
