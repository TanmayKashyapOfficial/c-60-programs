/*
 * Day 48 (14/11/2026) - Program 95
 * Floyd's Triangle
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of rows: 4
 *   1
 *   2 3
 *   4 5 6
 *   7 8 9 10
 */

#include <stdio.h>

int main() {
    int rows, i, j, number = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}
