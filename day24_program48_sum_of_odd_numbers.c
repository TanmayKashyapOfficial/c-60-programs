/*
 * Day 24 (21/10/2026) - Program 48
 * Sum of Odd Numbers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Sum of odd numbers from 1 to 20 = 100
 */

#include <stdio.h>

int main() {
    int i, sum = 0;

    // odd numbers from 1 to 20
    for (i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
        }
    }

    printf("Sum of odd numbers from 1 to 20 = %d\n", sum);
    return 0;
}
