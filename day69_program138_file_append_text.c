/*
 * Day 69 (05/12/2026) - Program 138
 * Append Text to a File
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a line to append: This line is appended.
 *   Text appended to sample.txt
 */

#include <stdio.h>

int main() {
    FILE *file;
    char text[200];

    printf("Enter a line to append: ");
    fgets(text, sizeof(text), stdin);

    file = fopen("sample.txt", "a");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    fprintf(file, "%s", text);
    fclose(file);

    printf("Text appended to sample.txt\n");
    return 0;
}
