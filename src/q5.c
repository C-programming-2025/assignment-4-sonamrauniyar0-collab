// Write a C program that dynamically allocates memory for a string entered by the user and finds its length using pointers.
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char *str;
    int length = 0;
    str = (char *)malloc(100 * sizeof(char));
    if (str == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter a string: ");
    scanf("%s", str);   
    char *ptr = str;
    while (*ptr != '\0') 
    {
        length++;
        ptr++;
    }
    printf("Length of the string = %d\n", length);
    free(str);
    return 0;
}