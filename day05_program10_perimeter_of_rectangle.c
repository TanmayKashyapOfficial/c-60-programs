/*
 * Day 5 (02/10/2026) - Program 10
 * Perimeter of Rectangle
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter length and breadth: 5 3
 *   Perimeter = 16.00
 */

#include <stdio.h>

int main() {
    float length, breadth, perimeter;

    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);

    perimeter = 2 * (length + breadth);
    printf("Perimeter = %.2f\n", perimeter);
    return 0;
}
