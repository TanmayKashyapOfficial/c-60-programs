/*
 * Day 3 (30/09/2026) - Program 6
 * Subtract Two Numbers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 50 20
 *   Difference = 30
 */

#include <stdio.h>

int main() {
    int a, b, difference;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    difference = a - b;
    printf("Difference = %d\n", difference);
    return 0;
}
