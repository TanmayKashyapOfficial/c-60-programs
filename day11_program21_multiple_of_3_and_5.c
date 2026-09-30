/*
 * Day 11 (08/10/2026) - Program 21
 * Multiple of 3 and 5
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 30
 *   30 is divisible by both 3 and 5.
 */

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0) {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", number);
    }

    return 0;
}
