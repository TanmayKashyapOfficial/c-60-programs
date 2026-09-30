/*
 * Day 7 (04/10/2026) - Program 14
 * Divisible by 5
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 25
 *   25 is divisible by 5.
 */

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 5 == 0) {
        printf("%d is divisible by 5.\n", number);
    } else {
        printf("%d is not divisible by 5.\n", number);
    }

    return 0;
}
