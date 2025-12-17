// Write a C program that defines a structure Car with members: model, year, and mileage. 
// Store information for 3 cars and find the car with the lowest mileage.
#include <stdio.h>

struct Car 
{
    char model[30];
    int year;
    float mileage;
};

int main() 
{
    struct Car c[3];
    int min = 0;

    // Input car details
    for (int i = 0; i < 3; i++) 
    {
        printf("\nEnter details of car %d\n", i + 1);
        scanf("%s %d %f", c[i].model, &c[i].year, &c[i].mileage);
    }

    for (int i = 1; i < 3; i++) 
    {
        if (c[i].mileage < c[min].mileage)
            min = i;
    }

    printf("\nCar with lowest mileage:\n");
    printf("Model: %s\nYear: %d\nMileage: %.2f\n",
           c[min].model, c[min].year, c[min].mileage);

    return 0;
}