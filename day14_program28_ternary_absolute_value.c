/*
 * Day 14 (11/10/2026) - Program 28
 * Absolute Value Using Ternary Operator
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter an integer: -25
 *   Absolute value = 25
 */

#include <stdio.h>

int main() {
    int number, absolute;

    printf("Enter an integer: ");
    scanf("%d", &number);

    absolute = (number < 0) ? -number : number;
    printf("Absolute value = %d\n", absolute);

    return 0;
}
