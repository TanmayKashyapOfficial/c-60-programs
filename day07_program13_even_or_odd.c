/*
 * Day 7 (04/10/2026) - Program 13
 * Even or Odd
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 7
 *   7 is odd.
 */

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
