/*
 * Day 27 (24/10/2026) - Program 54
 * Minimum of Five Numbers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter five numbers: 12 45 7 89 23
 *   Minimum = 7
 */

#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, min;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    min = n1;
    if (n2 < min) {
        min = n2;
    }
    if (n3 < min) {
        min = n3;
    }
    if (n4 < min) {
        min = n4;
    }
    if (n5 < min) {
        min = n5;
    }

    printf("Minimum = %d\n", min);
    return 0;
}
