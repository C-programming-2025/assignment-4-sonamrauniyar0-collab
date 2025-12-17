// Write a C program that reverses an array of characters using pointers.
#include <stdio.h>

void reverse(char *arr, int n) 
{
    char temp;
    char *start = arr;
    char *end = arr + n - 1;

    while (start < end) 
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() 
{
    char arr[] = {'H', 'E', 'L', 'L', 'O'};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%c ", arr[i]);
    }
    reverse(arr, n);
    printf("\nReversed array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%c ", arr[i]);
    }
    return 0;
}