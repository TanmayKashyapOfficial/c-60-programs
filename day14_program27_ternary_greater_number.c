/*
 * Day 14 (11/10/2026) - Program 27
 * Greater Number Using Ternary Operator
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 10 20
 *   Largest = 20
 */

#include <stdio.h>

int main() {
    int a, b, largest;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    largest = (a > b) ? a : b;
    printf("Largest = %d\n", largest);

    return 0;
}
