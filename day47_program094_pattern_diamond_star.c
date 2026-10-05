/*
 * Day 47 (13/11/2026) - Program 94
 * Diamond Star Pattern
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of rows for half diamond: 4
 *      *
 *     ***
 *    *****
 *   *******
 *    *****
 *     ***
 *      *
 */

#include <stdio.h>

int main() {
    int rows, i, j, k;

    printf("Enter number of rows for half diamond: ");
    scanf("%d", &rows);

    // upper half
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // lower half
    for (i = rows - 1; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
