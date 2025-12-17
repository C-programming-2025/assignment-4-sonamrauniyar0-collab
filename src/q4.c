// Write a C program that dynamically allocates memory for an integer array of size n, where n is entered by the user. Prompt the user to enter n elements and display them using pointers.
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    int *arr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", arr + i);  
    }
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", *(arr + i));  
    }

    free(arr);
    return 0;
}