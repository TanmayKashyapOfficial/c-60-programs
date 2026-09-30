/*
 * Day 30 (27/10/2026) - Program 59
 * Even/Odd Using Function
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 10
 *   10 is even.
 */

#include <stdio.h>

// returns 1 if the number is even, otherwise returns 0
int isEven(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isEven(number) == 1) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
