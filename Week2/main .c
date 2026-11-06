#include <stdio.h>

int main()
{
    double revenue;
    double expenses;
    double balance;

    printf("====================================\n");
    printf(" MUNICIPAL BUDGET CALCULATOR\n");
    printf("====================================\n");

    printf("Enter total revenue: N$");
    scanf("%lf", &revenue);

    printf("Enter total expenses: N$");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\n========== BUDGET REPORT ==========\n");

    printf("Revenue : N$%.2f\n", revenue);
    printf("Expenses: N$%.2f\n", expenses);
    printf("Balance : N$%.2f\n", balance);

    if (balance >= 0)
    {
        printf("Status  : Surplus\n");
    }
    else
    {
        printf("Status  : Deficit\n");
    }

    return 0;
}