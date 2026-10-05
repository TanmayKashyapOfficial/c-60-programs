/*
 * Day 68 (04/12/2026) - Program 136
 * Write Text to a File
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a line to write to the file: Hello from Tanmay
 *   Text written to sample.txt
 */

#include <stdio.h>

int main() {
    FILE *file;
    char text[200];

    printf("Enter a line to write to the file: ");
    fgets(text, sizeof(text), stdin);

    file = fopen("sample.txt", "w");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    fprintf(file, "%s", text);
    fclose(file);

    printf("Text written to sample.txt\n");
    return 0;
}
