// Write a C program that defines a structure Employee with members: name, employee ID, and salary. 
// Take input for 5 employees and display the details of the employee with the highest salary.
#include <stdio.h>

struct Employee 
{
    char name[50];
    int empID;
    float salary;
};

int main() 
{
    struct Employee e[5];
    int i, maxIndex = 0;

    for (i = 0; i < 5; i++) 
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Employee ID: ");
        scanf("%d", &e[i].empID);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    for (i = 1; i < 5; i++) 
    {
        if (e[i].salary > e[maxIndex].salary) 
        {
            maxIndex = i;
        }
    }

    printf("\nEmployee with Highest Salary:\n");
    printf("Name        : %s\n", e[maxIndex].name);
    printf("Employee ID : %d\n", e[maxIndex].empID);
    printf("Salary      : %.2f\n", e[maxIndex].salary);

    return 0;
}