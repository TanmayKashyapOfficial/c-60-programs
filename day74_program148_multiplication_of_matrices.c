/*
 * Day 74 (10/12/2026) - Program 148
 * Multiplication of Two Matrices
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter rows and columns of first matrix, then columns of second: 2 2 2
 *   Enter elements of first matrix: 1 2 3 4
 *   Enter elements of second matrix: 5 6 7 8
 *   Resultant matrix:
 *   19 22
 *   43 50
 */

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, c2, i, j, k;

    printf("Enter rows and columns of first matrix, then columns of second: ");
    scanf("%d %d %d", &r1, &c1, &c2);

    printf("Enter elements of first matrix: ");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix: ");
    for (i = 0; i < c1; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] = result[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
