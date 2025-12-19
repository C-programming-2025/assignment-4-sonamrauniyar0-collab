// Write a C program that copies the contents of one file to another file.
#include <stdio.h>

int main() 
{
    FILE *sourceFile, *targetFile;
    char ch;

    sourceFile = fopen("source.txt", "r");

    if (sourceFile == NULL) 
    {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    targetFile = fopen("target.txt", "w");

    if (targetFile == NULL) 
    {
        printf("Error: Could not open target file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) 
    {
        fputc(ch, targetFile);
    }

    fclose(sourceFile);
    fclose(targetFile);

    printf("File copied successfully.\n");

    return 0;
}