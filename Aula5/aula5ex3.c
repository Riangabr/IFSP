#include <stdio.h>

int main() {
    float C, i, M;

    printf("Capital: ");
    scanf("%f", &C);
    printf("Juros (%%): ");
    scanf("%f", &i);

    float taxa_decimal = i / 100;
    for(int mes = 1; mes <= 12; mes++) {
        M = C * (1 + taxa_decimal * mes);
        printf("Mes %d: %.2f\n", mes, M);
    }

    return 0;
}