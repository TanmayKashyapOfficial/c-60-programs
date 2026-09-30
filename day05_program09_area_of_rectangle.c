/*
 * Day 5 (02/10/2026) - Program 9
 * Area of Rectangle
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter length and breadth: 5 3
 *   Area = 15.00
 */

#include <stdio.h>

int main() {
    float length, breadth, area;

    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    printf("Area = %.2f\n", area);
    return 0;
}
