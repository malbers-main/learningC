#include <stdio.h>


int main(int argc, char *argv[]) {

    // If no filename is provided then prompt the user with the correct usage and return error
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1; // Return error status
    }
    
    FILE *filePointer;
    char *fileName = argv[1];
    int newlineCount = 1;
    char ch;

    // Open the file in read mode
    filePointer = fopen(fileName, "r");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error opening file %s\n", fileName);
        return 1; // Return error status
    }

    // Iterate through characters counting the number of newlines
    while ((ch = getc(filePointer)) != EOF) {
        if (ch == '\n') {
            newlineCount++;
        }
    }

    // Close the file
    fclose(filePointer);

    // Print number of newlines to user
    printf("There are %d lines in file %s.\n", newlineCount, argv[1]);

    return 0; // Return success status
}