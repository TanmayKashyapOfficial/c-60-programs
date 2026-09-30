/*
 * Day 22 (19/10/2026) - Program 43
 * Sum of Numbers 1 to 10
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Sum = 55
 */

#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 1; i <= 10; i++) {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
