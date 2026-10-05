/*
 * Day 55 (21/11/2026) - Program 109
 * Structure with a Function
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter x and y coordinates: 10 20
 *   Point = (10, 20)
 */

#include <stdio.h>

struct Point {
    int x;
    int y;
};

// a function that takes a structure as a parameter
void printPoint(struct Point p) {
    printf("Point = (%d, %d)\n", p.x, p.y);
}

int main() {
    struct Point p1;

    printf("Enter x and y coordinates: ");
    scanf("%d %d", &p1.x, &p1.y);

    printPoint(p1);
    return 0;
}
