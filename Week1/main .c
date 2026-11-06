#include <stdio.h>
#include <string.h>

int main()
{
    char municipality[50];
    char mayor[50];
    int population;

    printf("====================================\n");
    printf(" MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("====================================\n");

    printf("Welcome to MFMS!\n\n");

    printf("Enter Municipality Name: ");
    fgets(municipality, sizeof(municipality), stdin);
    municipality[strcspn(municipality, "\n")] = '\0';

    printf("Enter Mayor Name: ");
    fgets(mayor, sizeof(mayor), stdin);
    mayor[strcspn(mayor, "\n")] = '\0';

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n========== MUNICIPAL REPORT ==========\n");

    printf("Municipality: %s\n", municipality);
    printf("Mayor       : %s\n", mayor);
    printf("Population  : %d\n", population);

    printf("======================================\n");

    return 0;
}