/*
 * Day 21 (18/10/2026) - Program 42
 * Print Even Numbers 1 to 10
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   2
 *   4
 *   6
 *   8
 *   10
 */

#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
