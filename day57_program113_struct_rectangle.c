/*
 * Day 57 (23/11/2026) - Program 113
 * Structure to Store Rectangle Dimensions
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter length and breadth: 5 3
 *   Area = 15.00
 *   Perimeter = 16.00
 */

#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    struct Rectangle r1;
    float area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%f %f", &r1.length, &r1.breadth);

    area = r1.length * r1.breadth;
    perimeter = 2 * (r1.length + r1.breadth);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
