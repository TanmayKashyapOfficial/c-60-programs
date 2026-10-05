/*
 * Day 56 (22/11/2026) - Program 111
 * Sum of Two Structure Members
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter x and y of first point: 10 20
 *   Enter x and y of second point: 5 15
 *   Sum Point = (15, 35)
 */

#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1, p2, result;

    printf("Enter x and y of first point: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter x and y of second point: ");
    scanf("%d %d", &p2.x, &p2.y);

    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;

    printf("Sum Point = (%d, %d)\n", result.x, result.y);
    return 0;
}
