/*
 * Day 9 (06/10/2026) - Program 18
 * Smaller of Two Numbers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 45 30
 *   30 is smaller.
 */

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("%d is smaller.\n", a);
    } else if (b < a) {
        printf("%d is smaller.\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
