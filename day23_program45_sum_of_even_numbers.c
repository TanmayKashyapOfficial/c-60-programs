/*
 * Day 23 (20/10/2026) - Program 45
 * Sum of Even Numbers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Sum of even numbers from 1 to 20 = 110
 */

#include <stdio.h>

int main() {
    int i, sum = 0;

    // even numbers from 1 to 20
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }

    printf("Sum of even numbers from 1 to 20 = %d\n", sum);
    return 0;
}
