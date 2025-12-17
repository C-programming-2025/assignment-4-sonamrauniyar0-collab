// Write a C program that uses a structure Point with members x and y, representing coordinates. 
// Write a function that takes two Point structures and returns the distance between them.
#include <stdio.h>
#include <math.h>

struct Point 
{
    float x;
    float y;
};

float distance(struct Point p1, struct Point p2) 
{
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) +
                (p2.y - p1.y) * (p2.y - p1.y));
}

int main() 
{
    struct Point p1, p2;

    printf("Enter coordinates of point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter coordinates of point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    printf("Distance = %.2f\n", distance(p1, p2));

    return 0;
}