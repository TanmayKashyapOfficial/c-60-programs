/*
 * Day 47 (13/11/2026) - Program 93
 * Hollow Square Pattern
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter side length: 5
 *   * * * * *
 *   *       *
 *   *       *
 *   *       *
 *   * * * * *
 */

#include <stdio.h>

int main() {
    int side, i, j;

    printf("Enter side length: ");
    scanf("%d", &side);

    for (i = 1; i <= side; i++) {
        for (j = 1; j <= side; j++) {
            if (i == 1 || i == side || j == 1 || j == side) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
