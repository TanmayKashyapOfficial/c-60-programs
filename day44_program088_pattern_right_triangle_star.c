/*
 * Day 44 (10/11/2026) - Program 88
 * Right Triangle Star Pattern
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of rows: 4
 *   *
 *   * *
 *   * * *
 *   * * * *
 */

#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
