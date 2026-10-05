/*
 * Day 78 (14/12/2026) - Program 156
 * Generate a Random Number
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Random number = 66
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using a fixed seed (42) so the output is the same every run.
    // For a different random number each time, use srand(time(0)) instead,
    // which needs #include <time.h>.
    srand(42);

    int randomNumber = rand() % 100;  // a number between 0 and 99

    printf("Random number = %d\n", randomNumber);
    return 0;
}
