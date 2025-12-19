// Write a C program to read the contents of a text file and display them on the screen.
#include <stdio.h>

int main() 
{
    FILE *file;
    char ch;

    file = fopen("input.txt", "r");

    if (file == NULL) 
    {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) 
    {
        putchar(ch);
    }

    fclose(file);

    return 0;
}