/*
 * Day 9 (06/10/2026) - Program 17
 * Larger of Two Numbers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 45 30
 *   45 is larger.
 */

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is larger.\n", a);
    } else if (b > a) {
        printf("%d is larger.\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
