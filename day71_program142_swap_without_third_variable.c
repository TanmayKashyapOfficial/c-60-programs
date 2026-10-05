/*
 * Day 71 (07/12/2026) - Program 142
 * Swap Two Numbers Without a Third Variable
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 5 10
 *   Before swap: a = 5, b = 10
 *   After swap: a = 10, b = 5
 */

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
