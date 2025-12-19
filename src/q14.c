// Write a C program that counts the number of characters, words, and lines in a text file.
#include <stdio.h>
#include <ctype.h>

int main() 
{
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    file = fopen("input.txt", "r");
    if (file == NULL) 
    {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) 
    {
        characters++;  

        if (ch == '\n') 
        {
            lines++;  
        }

        if (isspace(ch)) 
        {
            inWord = 0;
        } 
        else if (inWord == 0) 
        {
            inWord = 1;
            words++;
        }
    }

    if (characters > 0 && ch != '\n') 
    {
        lines++;
    }

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(file);

    return 0;
}