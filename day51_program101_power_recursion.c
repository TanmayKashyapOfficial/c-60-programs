/*
 * Day 51 (17/11/2026) - Program 101
 * Power of a Number Using Recursion
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter base and exponent: 2 5
 *   2 ^ 5 = 32
 */

#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    printf("%d ^ %d = %d\n", base, exponent, power(base, exponent));
    return 0;
}
