/*
 * Day 75 (11/12/2026) - Program 150
 * Sum of Diagonal Elements of a Matrix
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter size of square matrix: 3
 *   Enter elements of matrix: 1 2 3 4 5 6 7 8 9
 *   Sum of diagonal elements = 15
 */

#include <stdio.h>

int main() {
    int a[10][10];
    int n, i, j, sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}
