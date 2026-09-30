/*
 * Day 25 (22/10/2026) - Program 50
 * Count Digits
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 12345
 *   Number of digits = 5
 */

#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        count = 1;
    }

    while (number != 0) {
        count++;
        number = number / 10;
    }

    printf("Number of digits = %d\n", count);
    return 0;
}
