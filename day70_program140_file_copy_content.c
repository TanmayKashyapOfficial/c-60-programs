/*
 * Day 70 (06/12/2026) - Program 140
 * Copy Content from One File to Another
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Content copied to sample_copy.txt
 */

#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    sourceFile = fopen("sample.txt", "r");
    if (sourceFile == NULL) {
        printf("Could not open sample.txt. Run the 'Write Text to a File' program first.\n");
        return 1;
    }

    destFile = fopen("sample_copy.txt", "w");
    if (destFile == NULL) {
        printf("Could not create the copy file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("Content copied to sample_copy.txt\n");
    return 0;
}
