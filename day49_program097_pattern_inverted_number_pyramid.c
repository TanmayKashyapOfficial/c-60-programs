/*
 * Day 49 (15/11/2026) - Program 97
 * Inverted Number Pyramid
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of rows: 4
 *   1 2 3 4
 *   1 2 3
 *   1 2
 *   1
 */

#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
