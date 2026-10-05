/*
 * Day 46 (12/11/2026) - Program 91
 * Number Triangle Pattern
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of rows: 4
 *   1
 *   1 2
 *   1 2 3
 *   1 2 3 4
 */

#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
