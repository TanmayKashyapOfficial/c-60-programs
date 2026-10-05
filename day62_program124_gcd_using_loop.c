/*
 * Day 62 (28/11/2026) - Program 124
 * GCD of Two Numbers Using Loop
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 48 18
 *   GCD = 6
 */

#include <stdio.h>

int main() {
    int a, b, i, gcd = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    printf("GCD = %d\n", gcd);
    return 0;
}
