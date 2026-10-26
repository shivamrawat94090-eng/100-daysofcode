//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/


#include <stdio.h>

int main() {
    FILE *src, *dest;
    char source[100], destination[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", source);

    printf("Enter destination filename: ");
    scanf("%99s", destination);

    src = fopen(source, "r");

    if (src == NULL) {
        printf("Error opening source file!");
        return 1;
    }

    dest = fopen(destination, "w");

    if (dest == NULL) {
        printf("Error opening destination file!");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s", destination);

    return 0;
}