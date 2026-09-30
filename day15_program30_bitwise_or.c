/*
 * Day 15 (12/10/2026) - Program 30
 * Bitwise OR
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two integers: 5 3
 *   5 | 3 = 7
 */

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // 5 = 0101 and 3 = 0011, so 5 | 3 = 0111
    printf("%d | %d = %d\n", a, b, a | b);
    return 0;
}
