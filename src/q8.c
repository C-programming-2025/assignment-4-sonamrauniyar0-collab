// Write a C program that defines a structure Book with members: title, author, and price. 
// Allow the user to enter details of n books and then display all books whose price is above a 
// user-defined value.
#include <stdio.h>

struct Book
{
    char title[30];
    char author[30];
    float price;
};

int main() 
{
    struct Book b[50];
    int n;
    float limit;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        printf("\nBook %d\n", i + 1);
        scanf("%s %s %f", b[i].title, b[i].author, &b[i].price);
    }

    printf("\nEnter price limit: ");
    scanf("%f", &limit);

    printf("\nBooks above %.2f:\n", limit);
    for (int i = 0; i < n; i++) 
    {
        if (b[i].price > limit)
            printf("%s %s %.2f\n", b[i].title, b[i].author, b[i].price);
    }

    return 0;
}