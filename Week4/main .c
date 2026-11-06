#include <stdio.h>

#define SIZE 50

int main()
{
    float salaries[SIZE];
    float total = 0;
    float average;
    float highest;
    float lowest;
    float searchSalary;
    float temp;

    int i, j;
    int found = 0;

    printf("====================================\n");
    printf(" EMPLOYEE SALARY ANALYSIS\n");
    printf("====================================\n");

    // Capture salaries
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

        total = total + salaries[i];
    }

    // Calculate average
    average = total / SIZE;

    highest = salaries[0];
    lowest = salaries[0];

    // Find highest and lowest salary
    for (i = 1; i < SIZE; i++)
    {
        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }

        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }

    printf("\n========== SALARY REPORT ==========\n");

    printf("Total Salaries : N$%.2f\n", total);
    printf("Average Salary : N$%.2f\n", average);
    printf("Highest Salary : N$%.2f\n", highest);
    printf("Lowest Salary  : N$%.2f\n", lowest);

    // Search for a salary
    printf("\nEnter salary to search: ");
    scanf("%f", &searchSalary);

    for (i = 0; i < SIZE; i++)
    {
        if (salaries[i] == searchSalary)
        {
            printf("Salary found at employee %d\n", i + 1);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Salary not found.\n");
    }

    // Sort salaries using Bubble Sort
    for (i = 0; i < SIZE - 1; i++)
    {
        for (j = 0; j < SIZE - i - 1; j++)
        {
            if (salaries[j] > salaries[j + 1])
            {
                temp = salaries[j];

                salaries[j] = salaries[j + 1];

                salaries[j + 1] = temp;
            }
        }
    }

    printf("\n========== SORTED SALARIES ==========\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("N$%.2f\n", salaries[i]);
    }

    return 0;
}