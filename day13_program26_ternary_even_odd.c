/*
 * Day 13 (10/10/2026) - Program 26
 * Even/Odd Using Ternary Operator
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 15
 *   Odd
 */

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%s\n", (number % 2 == 0) ? "Even" : "Odd");

    return 0;
}
