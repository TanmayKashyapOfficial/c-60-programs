/*
 * Day 72 (08/12/2026) - Program 143
 * Swap Two Numbers Using a Third Variable
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 5 10
 *   Before swap: a = 5, b = 10
 *   After swap: a = 10, b = 5
 */

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
