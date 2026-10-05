/*
 * Day 52 (18/11/2026) - Program 103
 * GCD Using Recursion
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 48 18
 *   GCD = 6
 */

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d\n", gcd(a, b));
    return 0;
}
