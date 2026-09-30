/*
 * Day 8 (05/10/2026) - Program 16
 * Voting Age
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter your age: 20
 *   You are eligible to vote.
 */

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
