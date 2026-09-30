/*
 * Day 20 (17/10/2026) - Program 39
 * Month Number Using switch
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a month number from 1 to 12: 10
 *   October
 */

#include <stdio.h>

int main() {
    int month;

    printf("Enter a month number from 1 to 12: ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid month number.\n");
    }

    return 0;
}
