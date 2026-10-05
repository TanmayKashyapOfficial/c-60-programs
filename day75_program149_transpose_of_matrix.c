/*
 * Day 75 (11/12/2026) - Program 149
 * Transpose of a Matrix
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter rows and columns: 2 3
 *   Enter elements of matrix: 1 2 3 4 5 6
 *   Transpose of the matrix:
 *   1 4
 *   2 5
 *   3 6
 */

#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int rows, cols, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix: ");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
