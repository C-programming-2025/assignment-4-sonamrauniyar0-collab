// Write a C program to create a file and write a user-entered string into it. Then display a 
// message confirming that the file has been written successfully.
#include <stdio.h>

int main() 
{
    FILE *fp;
    char str[100];

    printf("Enter a string to write to file: ");
    fgets(str, sizeof(str), stdin);  
    fp = fopen("output.txt", "w");
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "%s", str);

    fclose(fp);

    printf("File written successfully.\n");

    return 0;
}