/*
 * Day 19 (16/10/2026) - Program 38
 * Day Number Using switch
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a day number from 1 to 7: 3
 *   Tuesday
 */

#include <stdio.h>

int main() {
    int day;

    printf("Enter a day number from 1 to 7: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day number.\n");
    }

    return 0;
}
