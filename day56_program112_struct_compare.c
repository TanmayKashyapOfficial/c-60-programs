/*
 * Day 56 (22/11/2026) - Program 112
 * Compare Two Structures
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter x and y of first point: 10 20
 *   Enter x and y of second point: 10 20
 *   Both points are equal.
 */

#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1, p2;

    printf("Enter x and y of first point: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter x and y of second point: ");
    scanf("%d %d", &p2.x, &p2.y);

    if (p1.x == p2.x && p1.y == p2.y) {
        printf("Both points are equal.\n");
    } else {
        printf("Points are different.\n");
    }

    return 0;
}
