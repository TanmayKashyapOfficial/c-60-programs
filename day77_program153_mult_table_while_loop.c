/*
 * Day 77 (13/12/2026) - Program 153
 * Print Multiplication Table Using While Loop
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 7
 *   7 x 1 = 7
 *   7 x 2 = 14
 *   7 x 3 = 21
 *   7 x 4 = 28
 *   7 x 5 = 35
 *   7 x 6 = 42
 *   7 x 7 = 49
 *   7 x 8 = 56
 *   7 x 9 = 63
 *   7 x 10 = 70
 */

#include <stdio.h>

int main() {
    int number, i = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (i <= 10) {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }

    return 0;
}
