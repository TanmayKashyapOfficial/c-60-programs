/*
 * Day 48 (14/11/2026) - Program 96
 * Right Triangle Using Alphabets
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of rows: 5
 *   A
 *   A B
 *   A B C
 *   A B C D
 *   A B C D E
 */

#include <stdio.h>

int main() {
    int rows, i, j;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
