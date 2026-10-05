/*
 * Day 70 (06/12/2026) - Program 139
 * Count Lines in a File
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Number of lines = 2
 */

#include <stdio.h>

int main() {
    FILE *file;
    char line[200];
    int count = 0;

    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Could not open the file. Run the 'Write Text to a File' program first.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        count++;
    }

    fclose(file);
    printf("Number of lines = %d\n", count);
    return 0;
}
