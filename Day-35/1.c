#include <stdio.h>
#include <stdlib.h>

void copyFile(const char *sourceFilePath, const char *destinationFilePath) {
    FILE *sourceFile, *destinationFile;
    char ch;

    // Open the source file for reading
    sourceFile = fopen(sourceFilePath, "r");

    if (sourceFile == NULL) {
        printf("Error: Unable to open source file '%s' for reading.\n", sourceFilePath);
        exit(EXIT_FAILURE);
    }

    // Open the destination file for writing
    destinationFile = fopen(destinationFilePath, "w");

    if (destinationFile == NULL) {
        printf("Error: Unable to open destination file '%s' for writing.\n", destinationFilePath);
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    // Read character by character from source file and write to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("Content copied from '%s' to '%s' successfully.\n", sourceFilePath, destinationFilePath);
}

int main() {
    const char *sourceFilePath = "source.txt"; // Replace with the path to your source file
    const char *destinationFilePath = "destination.txt"; // Replace with the path to your destination file

    copyFile(sourceFilePath, destinationFilePath);

    return 0;
}
