/*
 * Day 46 (12/11/2026) - Program 92
 * Square Star Pattern
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter side length: 4
 *   * * * *
 *   * * * *
 *   * * * *
 *   * * * *
 */

#include <stdio.h>

int main() {
    int side, i, j;

    printf("Enter side length: ");
    scanf("%d", &side);

    for (i = 1; i <= side; i++) {
        for (j = 1; j <= side; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
