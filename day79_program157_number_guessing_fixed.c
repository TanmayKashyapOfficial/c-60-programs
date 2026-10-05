/*
 * Day 79 (15/12/2026) - Program 157
 * Simple Number Guessing Logic (Fixed Number)
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Guess a number between 1 and 100: 50
 *   Too high. The number was 42
 */

#include <stdio.h>

int main() {
    int secretNumber = 42;
    int guess;

    printf("Guess a number between 1 and 100: ");
    scanf("%d", &guess);

    if (guess == secretNumber) {
        printf("Correct! The number was %d\n", secretNumber);
    } else if (guess < secretNumber) {
        printf("Too low. The number was %d\n", secretNumber);
    } else {
        printf("Too high. The number was %d\n", secretNumber);
    }

    return 0;
}
