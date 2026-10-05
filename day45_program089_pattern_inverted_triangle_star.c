/*
 * Day 45 (11/11/2026) - Program 89
 * Inverted Right Triangle Star Pattern
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of rows: 4
 *   * * * *
 *   * * *
 *   * *
 *   *
 */

#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
