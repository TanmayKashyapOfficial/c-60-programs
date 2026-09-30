/*
 * Day 4 (01/10/2026) - Program 8
 * Quotient and Remainder
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 17 5
 *   Quotient = 3
 *   Remainder = 2
 */

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // division by zero is not allowed
    if (b == 0) {
        printf("The second number cannot be zero.\n");
    } else {
        printf("Quotient = %d\n", a / b);
        printf("Remainder = %d\n", a % b);
    }

    return 0;
}
