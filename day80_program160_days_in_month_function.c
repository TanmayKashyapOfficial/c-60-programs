/*
 * Day 80 (16/12/2026) - Program 160
 * Print Days in a Month Using switch and Function
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter month and year: 2 2024
 *   Number of days = 29
 */

#include <stdio.h>

int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                return 29;
            }
            return 28;
        default:
            return -1;
    }
}

int main() {
    int month, year, days;

    printf("Enter month and year: ");
    scanf("%d %d", &month, &year);

    days = daysInMonth(month, year);

    if (days == -1) {
        printf("Invalid month.\n");
    } else {
        printf("Number of days = %d\n", days);
    }

    return 0;
}
