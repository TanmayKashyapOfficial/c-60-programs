/*
 * Day 13 (10/10/2026) - Program 25
 * Positive/Negative Using Ternary Operator
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: -9
 *   Negative
 */

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // condition ? value_if_true : value_if_false
    printf("%s\n", (number >= 0) ? "Positive" : "Negative");

    return 0;
}
