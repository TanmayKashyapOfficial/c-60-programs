/*
 * Day 54 (20/11/2026) - Program 107
 * Structure to Store and Print a Date
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter day, month and year: 5 10 2026
 *   Date = 05/10/2026
 */

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date d1;

    printf("Enter day, month and year: ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("Date = %02d/%02d/%d\n", d1.day, d1.month, d1.year);
    return 0;
}
