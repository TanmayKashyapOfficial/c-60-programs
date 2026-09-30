/*
 * Day 22 (19/10/2026) - Program 44
 * Multiplication Table
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 5
 *   5 x 1 = 5
 *   5 x 2 = 10
 *   5 x 3 = 15
 *   5 x 4 = 20
 *   5 x 5 = 25
 *   5 x 6 = 30
 *   5 x 7 = 35
 *   5 x 8 = 40
 *   5 x 9 = 45
 *   5 x 10 = 50
 */

#include <stdio.h>

int main() {
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
