/*
 * Day 28 (25/10/2026) - Program 55
 * Percentage of Five Subjects
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter marks of 5 subjects (out of 100 each): 78 85 90 66 72
 *   Total = 391.00 out of 500
 *   Percentage = 78.20%
 */

#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;

    printf("Enter marks of 5 subjects (out of 100 each): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;

    printf("Total = %.2f out of 500\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
