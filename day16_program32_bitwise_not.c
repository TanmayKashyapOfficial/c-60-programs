/*
 * Day 16 (13/10/2026) - Program 32
 * Bitwise NOT
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter an integer: 5
 *   ~5 = -6
 */

#include <stdio.h>

int main() {
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    // ~a flips every bit, so ~a = -(a + 1)
    printf("~%d = %d\n", a, ~a);
    return 0;
}
