/*
 * Day 27 (24/10/2026) - Program 53
 * Maximum of Five Numbers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter five numbers: 12 45 7 89 23
 *   Maximum = 89
 */

#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, max;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    max = n1;
    if (n2 > max) {
        max = n2;
    }
    if (n3 > max) {
        max = n3;
    }
    if (n4 > max) {
        max = n4;
    }
    if (n5 > max) {
        max = n5;
    }

    printf("Maximum = %d\n", max);
    return 0;
}
