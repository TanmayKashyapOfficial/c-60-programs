/*
 * Day 15 (12/10/2026) - Program 29
 * Bitwise AND
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two integers: 5 3
 *   5 & 3 = 1
 */

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // 5 = 0101 and 3 = 0011, so 5 & 3 = 0001
    printf("%d & %d = %d\n", a, b, a & b);
    return 0;
}
