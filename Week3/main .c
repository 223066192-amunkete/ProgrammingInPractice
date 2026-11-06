#include <stdio.h>

int main()
{
    float basicSalary;
    float housing;
    float transport;
    float tax;

    float grossSalary;
    float netSalary;

    printf("====================================\n");
    printf(" EMPLOYEE SALARY CALCULATOR\n");
    printf("====================================\n");

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter housing allowance: ");
    scanf("%f", &housing);

    printf("Enter transport allowance: ");
    scanf("%f", &transport);

    printf("Enter tax: ");
    scanf("%f", &tax);

    grossSalary = basicSalary + housing + transport;

    netSalary = grossSalary - tax;

    printf("\n========== SALARY REPORT ==========\n");

    printf("Basic Salary : N$%.2f\n", basicSalary);
    printf("Housing      : N$%.2f\n", housing);
    printf("Transport    : N$%.2f\n", transport);
    printf("Gross Salary : N$%.2f\n", grossSalary);
    printf("Tax          : N$%.2f\n", tax);
    printf("Net Salary   : N$%.2f\n", netSalary);

    if (netSalary >= 20000)
    {
        printf("Status       : High Income\n");
    }
    else
    {
        printf("Status       : Standard Income\n");
    }

    return 0;
}