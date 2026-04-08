#include <stdio.h>
#include <math.h>

int main() {
    float C, i, M;
    int t;

    printf("Capital: ");
    scanf("%f", &C);
    printf("Taxa de juros (%%): ");
    scanf("%f", &i);
    printf("Tempo: ");
    scanf("%d", &t);

    float taxa_decimal = i / 100.0;

    for(int mes = 1; mes <= t; mes++) {
        M = C * pow((1 + taxa_decimal), mes);
        printf("Mes %d - Total: %f\n", mes, M);
    }

    return 0;
}