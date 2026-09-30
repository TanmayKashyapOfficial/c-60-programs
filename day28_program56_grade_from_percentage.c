/*
 * Day 28 (25/10/2026) - Program 56
 * Grade from Percentage
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter percentage: 85.5
 *   Grade = A
 */

#include <stdio.h>

int main() {
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90) {
        printf("Grade = O\n");
    } else if (percentage >= 80) {
        printf("Grade = A\n");
    } else {
        printf("Grade = Below A\n");
    }

    return 0;
}
