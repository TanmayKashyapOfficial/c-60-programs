/*
 * Day 69 (05/12/2026) - Program 137
 * Read Text from a File
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Content of sample.txt:
 *   Hello from Tanmay
 */

#include <stdio.h>

int main() {
    FILE *file;
    char line[200];

    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Could not open the file. Run the 'Write Text to a File' program first.\n");
        return 1;
    }

    printf("Content of sample.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
