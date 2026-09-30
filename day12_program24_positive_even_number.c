


































/*
 * Day 12 (09/10/2026) - Program 24
 * Positive Even Number
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 8
 *   8 is a positive even number.
 */

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0 && number % 2 == 0) {
        printf("%d is a positive even number.\n", number);
    } else {
        printf("%d is not a positive even number.\n", number);
    }

    return 0;
}
